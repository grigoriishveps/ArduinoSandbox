float a;
int b;
int r = 12;
int y = 11;
int g = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  double t;
  int p;
  p = analogRead(0);
  t = p * 5 / 10.24;
  if (t > 22   ){
    if (t > 27){
      digitalWrite(r, HIGH);
      tone(8, 8000);
      delay(100);
      noTone(8);
      digitalWrite(r, LOW);
    }
    else{
      digitalWrite(y, HIGH);
      delay(100);
      digitalWrite(y, LOW);
    }
  } 
  else{
     digitalWrite(g, HIGH);
     delay(100);
     digitalWrite(g, LOW);
  }
  if (millis() - a > 500){
    a = millis();
    Serial.print("Temperature is: ");
    Serial.print(t);
    Serial.println("C");
  }
  else;
}
