int g = 13;
int d = 0;
int val = 0;
void setup() {
  pinMode(g, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(d);
  if(val < 1023)
    digitalWrite(g, LOW);
  else
    digitalWrite(g, HIGH);
  delay(10);
}

