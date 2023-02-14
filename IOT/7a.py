import RPi.GPIO as gpio
import picamera 
import time

import smtplib
from email.mime.multipart import MIMEMultipart
from email.mime.text import MIMEText
from email.mime.base import MIMEBase
from email import encoders
from email.mime.image import MIMEImage

fromaddr = "shyleshbbhc@gmail.com"
toaddr = "uart94@gmail.com"    #bcshylesh@gmail.com

mail = MIMEMultipart()
mail['From']=fromaddr
mail['To']=toaddr
mail['Subject']="Attachment"
body='Mail sent'

led =15
pir=12
HIGH=1
LOW=0

gpio.setwarnings(False)
gpio.setmode(gpio.BOARD)
gpio.setup(led,gpio.OUT)
gpio.setup(pir,gpio.IN)
data=""

def sendMail(data):
	mail.attach(MIMEText(body,'plain'))
	print(data)
	dat='%s.jpg'%data
	print(data)
	attachment=open(dat,'rb')
	image=MIMEImage(attachment.read())
	attachment.close()
	mail.attach(image)
	server=smtplib.SMTP('smtp.gmail.com',587)
	server.starttls()
	server.login(fromaddr,"lamgnwlkfpkkbyko")
	text=mail.as_string()
	server.sendmail(fromaddr,toaddr,text)
	server.quit()
	
def capture_image():
	data=time.strftime("image was captured on %H:%M:%S|%d_%b_%y")
	camera.start_preview()
	time.sleep(5)
	print(data)
	camera.capture('%s.jpg'%data)
	camera.stop_preview()
	time.sleep(1)
	sendMail(data)

gpio.output(led,0)
camera=picamera.PiCamera()
camera.rotation=180
camera.awb_mode='auto'
camera.brightness=55
while 1:
	if gpio.input(pir)==1:
		gpio.output(led,HIGH)
		capture_image()
		while(gpio.input(pir)==1):
			time.sleep(4)
	else:
		gpio.output(led,LOW)
		time.sleep(0.01)
			
