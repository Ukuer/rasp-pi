from picamera import PiCamera
from time import sleep

camera = PiCamera()

# if preview was upside-down(颠倒的) 
# camera.rotation = 180 
# rotation 转动角度

camera.start_preview()
sleep(10)
camera.stop_prewiew()

# take a picture
camera.start_preview()
sleep(5)
camera.capture('/home/pi/Desktop/image.jpg')
camera.stop_preview()

callable`
