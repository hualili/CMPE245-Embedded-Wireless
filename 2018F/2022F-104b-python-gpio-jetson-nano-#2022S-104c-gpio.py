#--------------------------------------------
# gpio sample code; 
# coded by: HL, Sept., 2021; 
# status:   tested; 
# for Nvidia Jetson NANO. 
#--------------------------------------------
import RPi.GPIO as GPIO 
import time #use for delay 

GPIO.cleanup()
GPIO.setmode(GPIO.BOARD)
GPIO.setup(12,GPIO.OUT) 
GPIO.output(12,1)  #turn on GPIO at pin12

time.sleep(5) # sec
GPIO.output(12,0)  #turn off GPIO at pin12
#end
