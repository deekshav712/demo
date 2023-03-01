import RPi.GPIO as gpio
import time
import datetime
led=13
buzz=36
relay = 38
#timeString=now.strftime("%Y-%m-%d %H:%M")
gpio.setmode(gpio.BOARD)
gpio.setwarnings(False)
gpio.setup(led,gpio.OUT,initial=0)
gpio.setup(led,gpio.OUT)

gpio.setup(buzz,gpio.OUT,initial=0)
gpio.setup(buzz,gpio.OUT)

gpio.setup(relay,gpio.OUT,initial=0)
gpio.setup(relay,gpio.OUT)

from flask import Flask,render_template
app=Flask(__name__)

@app.route('/')
def hello_world():
	return render_template('web.html')
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
	return render_template('web.html',**templateData)
	
@app.route('/redledoff')
def redledoff():
	gpio.output(led,gpio.HIGH)
	now=datetime.datetime.now()
	timeString=now.strftime("%Y-%m-%d %H:%M")
	templateData={
	'status':'OFF',
	'time':timeString
	}
	return render_template('web.html',**templateData)
	
#for buzzer
@app.route('/buzzon')
def buzzon():
	gpio.output(buzz,gpio.LOW)
	now=datetime.datetime.now()
	timeString=now.strftime("%Y-%m-%d %H:%M")
	templateData={
	'bstatus':'ON',
	'time':timeString
	}
	return render_template('web.html',**templateData)
	
@app.route('/buzzoff')
def buzzoff():
	gpio.output(buzz,gpio.HIGH)
	now=datetime.datetime.now()
	timeString=now.strftime("%Y-%m-%d %H:%M")
	templateData={
	'bstatus':'OFF',
	'time':timeString
	}
	
	return render_template('web.html',**templateData)

#for realy
@app.route('/relayon')
def realyon():
	gpio.output(buzz,gpio.LOW)
	now=datetime.datetime.now()
	timeString=now.strftime("%Y-%m-%d %H:%M")
	templateData={
	'rstatus':'ON',
	'time':timeString
	}
	return render_template('web.html',**templateData)
	
@app.route('/realyoff')
def realyoff():
	gpio.output(buzz,gpio.HIGH)
	now=datetime.datetime.now()
	timeString=now.strftime("%Y-%m-%d %H:%M")
	templateData={
	'rstatus':'OFF',
	'time':timeString
	}
	
	return render_template('web.html',**templateData)

if __name__=="__main__":
	app.run(debug=True,port=4000,host='172.16.201.210:4000')
