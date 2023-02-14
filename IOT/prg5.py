from picamera import PiCamera
from time import sleep
import datetime

camera=PiCamera()

camera.start_preview()

current_date=datetime.datetime.now().strftime('%d-%m-%y %H:%M:%S')
sleep(3g)
camera.capture(current_date+'.jpg')

print("pi camera captured the image")

camera.stop_preview()


