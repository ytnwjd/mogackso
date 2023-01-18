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

//아두이노 보드와 통신하기
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(0));
  delay(100);
}

//특정 문자를 입력해 LED 제어하기
void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT)
}

void loop()
{
  if(Serial.available()){
    String input = Serial.readString();
    if(input == "a"){
      digitalWrite(13, HIGH);
    }
    if(input == "d"){
      digitalWrite(13, LOW);
    }
  }
}

//LED 한 개 제어하기
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
   digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}

//LED  3개 제어하기
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
   digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
     digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
     digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  delay(1000);
}

