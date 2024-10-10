import mysql.connector

con = mysql.connector.connect(host='paparella.com.br', database='paparell_iot', user='paparell_iot', password='senai2024')

if con.is_connected():
    db_info = con.get_server_info()
    print("Conectado ao servidor MySQL versão ", db_info)
    cursor = con.cursor()
    cursor.execute("select database();")
    linha = cursor.fetchone()
    print("Conectado ao banco de dados ", linha)
    
cursor.execute("SHOW TABLES")
for x in cursor:
    print("minhas tabelas: ", x)

# sql = "INSERT INTO bosch (nome_aluno, nome_sensor, valor_sensor) VALUES (%s, %s, %s)"
# val = ("Seu_nome", "5", "teste")
# cursor.execute(sql, val)

# con.commit()

# print(cursor.rowcount, "Dados gravados")
    
cursor.execute("SELECT * FROM bosch")
               
myresult = cursor.fetchall()

for x in myresult:
    print(x)
