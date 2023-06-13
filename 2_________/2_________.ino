
int a = 10;
void setup() {
  // put your setup code here, to run once:

  pinMode(a, OUTPUT);
}

void loop() {
  for(int i = 0; i < 3;i++){
  digitalWrite(a, HIGH);
  delay(300);
  digitalWrite(a, LOW);
  delay(100);
  }
  delay (500);
  for(int i = 0; i < 3;i++){
  digitalWrite(a, HIGH);
  delay(500);
  digitalWrite(a, LOW);
  delay(100);
  }

  delay (500);
  for(int i = 0; i < 3;i++){
  digitalWrite(a, HIGH);
  delay(300);
  digitalWrite(a, LOW);
  delay(100);
  }
  delay(2000);
}
