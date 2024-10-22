import serial
import time
import mysql.connector

ser = serial.Serial('COM3', 9600, timeout=1) # Iniciando a conexão serial
con = mysql.connector.connect(host='paparella.com.br', database='paparell_iot', user='paparell_iot', password='senai2024') # Conectando no banco

# Conferindo se a conexão com o banco foi bem sucedida
if con.is_connected():
    db_info = con.get_server_info()
    print("Conectado, versão: ", db_info)
    cursor = con.cursor()
    cursor.execute("select database();")
    linha = cursor.fetchone()
    print("Conectado ao banco de dados ", linha)


time.sleep(10) # Tempinho pq ninguém é de ferro

# pegar do banco
cursor.execute("select valor_sensor from bosch where nome_aluno = 'Ingrid-Milena'")
data = cursor.fetchall()
tamanho = len(data)
item = (data[tamanho-1][0])
print(item)

ser.write(item.encode())
time.sleep(0.1)

ser.close()
