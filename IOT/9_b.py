import socket
import RPi.GPIO as GPIO
import time

Buzzer=36

HOST='192.168.0.71'
PORT=4000

GPIO.setmode(GPIO.BOARD)
GPIO.setup(buzzer,GPIO.OUT)
GPIO.setwarnings(False)

try:
	with socket.socket(socket.AF_INET,socket.SOCK_STREAM) as s:
		s.connect((HOST,PORT))
		while True:
			data=s.recv(1024).decode('utf-8')
			print(data)
			if(str(data)=='Alert'):
				print('Alert!  Gas Leakage detected...')
				GPIO.OUTPUT(Buzzer,True)
				time.sleep(3)
				GPIO.OUTPUT(Buzzer,False)
				time.sleep(3)
				
except KeyboardInterrupt:
	s.close()
	GPIO.cleanup()
	
