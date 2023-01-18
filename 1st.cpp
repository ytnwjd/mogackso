//아두이노 내장 LED 1초 동안 깜박이기
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LEN_BUILTIN, HIGH);
  delay(1000);  // Wait for 1000 millisecond(s)
  digitalWrite(LEN_BUILTIN, LOW);
  delay(1000);
}

//아두이노 내장 LED 1초 동안 깜박이기_새로운 함수 생성하기
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  blink1();
}

void blink1()
{
  digitalWrite(LEN_BUILTIN, HIGH);
  delay(1000); 
  digitalWrite(LEN_BUILTIN, LOW);
  delay(1000);
}

//아두이노 내장 LED 1초 동안 깜박이기_디지털 핀 번호 입력받기
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  blink2(13);
}

void blink2(int pin)
{
  digitalWrite(pin, HIGH);
  delay(1000); 
  digitalWrite(pin, LOW);
  delay(1000);
}

