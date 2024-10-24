# PYTHON 2
import mysql.connector
import serial
import time

# Configurações do MySQL
db_config = {
    'user': 'paparell_iot',
    'password': 'senai2024',
    'host': 'paparella.com.br',  # ou o IP do servidor MySQL
    'database': 'paparell_iot'
}


# Configurações da porta serial
arduino_port = 'COM3'  # Altere conforme sua porta serial (no Linux seria algo como /dev/ttyUSB0)
baud_rate = 115200

ser = serial.Serial(arduino_port, baud_rate, timeout=1)# Função para ler dados do MySQL
def read_mysql_data():

    time.sleep(2)  # Esperar a conexão ser estabelecida 

    try:
        conn = mysql.connector.connect(**db_config)
        cursor = conn.cursor()

        # Sua query SQL
        cursor.execute("SELECT valor_sensor FROM bosch where nome_aluno = 'Grupo-meninas' ORDER BY id DESC limit 1")
        result = cursor.fetchall()

        conn.close()

        return result

    except mysql.connector.Error as err:
        print(f"Erro: {err}")
        return None

# Função para enviar dados ao Arduino via Serial
def send_data_to_arduino(data):

    try:
        # Conectando ao Arduino
        """ with serial.Serial(arduino_port, baud_rate, timeout=1) as ser:
            time.sleep(2)  # Esperar a conexão ser estabelecida """
            
        for row in data:
            # Converter a linha para string e enviar ao Arduino
            data_str = ','.join(map(str, row)).strip()  # Ex: converte [1, 'texto', 3] para "1,texto,3"
            
            ser.write(data_str.encode())  # Envia os dados para o Arduino
            print(f"Enviando: {data_str}")
                
            time.sleep(0.01)  # Aguardar para que o Arduino processe a entrada
        

    except serial.SerialException as err:
        print(f"Erro ao comunicar com o Arduino: {err}")

# Programa principal
if __name__ == "__main__":
   
    while True:
        # Ler os dados do MySQL
        data = read_mysql_data()

        if data:
            # Enviar os dados ao Arduino
            send_data_to_arduino(data)
        else:
            print("Nenhum dado encontrado.")

        time.sleep(0.01)  # Aguarda 10 segundos antes de repetir o processo
