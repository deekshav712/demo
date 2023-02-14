import RPi.GPIO as gpio
import time
import datetime
led=13

gpio.setmode(gpio.BOARD)
gpio.setwarnings(False)
gpio.setup(led,gpio.OUT,initial=0)
gpio.setup(led,gpio.OUT)



from flask import Flask,render_template
app=Flask(__name__)

@app.route('/')
def hello_world():
	return render_template('light_status.html')
	
	
def glow_led(event):
	print("Entered here")
	global light_status
	if event==switch1 and light_status=='OFF':
		gpio.output(led1,False)
		light_status="ON"
	elif event==switch1 and light_status=='ON':
		gpio.output(led1,True)
		light_status="OFF"


#for LED
@app.route('/redledon')
def redledon():
	gpio.output(led,gpio.LOW)
	now=datetime.datetime.now()
	timeString=now.strftime("%Y-%m-%d %H:%M")
	templateData={
	'status':'ON',
	'time':timeString
	}
	return render_template('light_status.html',**templateData)
	
@app.route('/redledoff')
def redledoff():
	gpio.output(led,gpio.HIGH)
	now=datetime.datetime.now()
	timeString=now.strftime("%Y-%m-%d %H:%M")
	templateData={
	'status':'OFF',
	'time':timeString
	}
	return render_template('light_status.html',**templateData)
		














gpio.add_event_detect(switch1,gpio.RISING,callback = glow_led,bouncetime = 1)
gpio.add_event_detect(switch2,gpio.RISING,callback = glow_led,bouncetime = 1)
try:
	while(True):
		time.sleep(1)
except KeyboardInterrupt:
	gpio.cleanup()

		
		

	


