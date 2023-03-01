from picamera import PiCamera
from time import sleep
import datetime

camera=PiCamera()
camera.start_preview()
current_date=datetime.datetime.now().strftime('%d-%m-%Y %H:%M:%S')
sleep(5)
camera.capture(current_date+'.jpg')
print("Pi Camera captured the image")
camera.stop_preview()
