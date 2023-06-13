float a;
int b;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  double t;
  int p;
  p = analogRead(0);
  t = p * 5 / 10.24;
  if (t > 27){
    tone(8, 8000);
    delay(2000);
  } 
  else{
    noTone(8); 
  }
  if (millis() - a > 500){
    a = millis();
    Serial.print("Temperature is: ");
    Serial.print(t);
    Serial.println("C");
  }
  else;
}
