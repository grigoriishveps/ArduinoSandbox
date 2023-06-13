int green = 8;
int yellow = 10;
int red = 12; 
void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  delay (5000);
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
  dgitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, LOW);
}
