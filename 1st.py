#아두이노 보드 내장 LED 깜박이기
from Arduino import Arduino
import time

board = Arduino('9600')
board.pinMode(13, "OUTPUT")

while True:
  board.digitalWrite(13, "LOW")
  time.sleep(1)
  board.digitalWrite(13, "HIGH")
  time.sleep(1)
 
#아두이노 보드 내장 LED 깜박이기_함수 정의하기
def blink1():
  board.digitalWrite(13, "LOW")
  time.sleep(1)
  board.digitalWrite(13, "HIGH")
  time.sleep(1)

#아두이노 보드와 통신하기
# from Arduino import Arduino
# import time
  
# board = Arduino('9600')
borad.pinMode(13, "OUTPUT")
board.pinMode(12, "OUTPUT")
board.pinMode(11, "OUTPUT")
  
while True:
   board.digitalWrite(13, "HIGH")
   time.sleep(1)
   board.digitalWrite(13, "LOW")
   time.sleep(1)
   board.digitalWrite(12, "HIGH")
   time.sleep(1)
   board.digitalWrite(12, "LOW")
   time.sleep(1)
   board.digitalWrite(11, "HIGH")
   time.sleep(1)
   board.digitalWrite(11, "LOW")
   time.sleep(1)
  
