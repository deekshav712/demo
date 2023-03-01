3.Flash an LED at a given on time and off time cycle, where the two times are taken from a file.

import RPi.GPIO as gpio
import time

gpio.setmode(gpio.BOARD)

led1 = 15
led2 = 13

gpio.setup(led1,gpio.OUT,initial=1) #Initially OFF
gpio.setup(led2,gpio.OUT,initial=1)

fh=open("ledtime.txt")
ontime=int(fh.readlines(1)[0].split("=")[1])
offtime=int(fh.readlines(2)[0].split("=")[1])
timeon=int(fh.readlines(3)[0].split("=")[1])
timeoff=int(fh.readlines(4)[0].split("=")[1])

try:
	while(True):
		gpio.output(led1, False) #ON
		time.sleep(ontime)
		gpio.output(led1, True)  #OFF
		time.sleep(offtime)
		gpio.output(led2, False) #ON
		time.sleep(timeon)
		gpio.output(led2, True)  #OFF
		time.sleep(timeoff)
except KeyboardInterrupt:
	gpio.cleanup()
