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
