import RPi.GPIO as gpio
import time
gpio.setmode(gpio.BOARD)
relay = 38
gpio.setup(relay,gpio.OUT,initial=0) #Initially OFF
#cron file
try:
		print("Start of Program")
		gpio.output(relay, True) #ON
		print("Relay On")
		time.sleep(5)
		gpio.output(relay, False)  #OFF
		print("Relay Off")
except KeyboardInterrupt:
	gpio.cleanup()
	print("End of Program")
