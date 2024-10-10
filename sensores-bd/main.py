import serial
import time

ser = serial.Serial('COM4', 9600, timeout=1)
time.sleep(2)
cont = 10

for i in range(cont):
    line = ser.readline()
    string_data = line.decode('utf-8')
    print(string_data)
    
    ser.close()
