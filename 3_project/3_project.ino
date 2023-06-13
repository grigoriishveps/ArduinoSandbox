int cr = 12;
int cy = 11;
int cg = 10;
int cin = 9;
int pr = 8;
int pg = 7;
int t = 5000;
unsigned long d;
void swap();
void setup() {
  // put your setup code here, to run once:
  pinMode(cr ,OUTPUT);
  pinMode(cy ,OUTPUT);
  pinMode(cg ,OUTPUT);
  pinMode(pr ,OUTPUT);
  pinMode(pg ,OUTPUT);
  pinMode(cin ,INPUT);
  digitalWrite(cg, HIGH);
  digitalWrite(pr, HIGH);
}

void loop() {
  int x = digitalRead(cin);
  if (x == HIGH && (millis()- t > 5000))
      swap();
}

void swap(){
  digitalWrite(cg, LOW);
  digitalWrite(cy,HIGH);
  delay(3000);

  digitalWrite(cy, LOW);
  digitalWrite(cr, HIGH);
  delay(2000);
  digitalWrite(pr, LOW);
  digitalWrite(pg ,HIGH);

  delay(t);

  for(int i = 0; i < 3; i++){
      digitalWrite(pg, LOW);
      delay(700);
      digitalWrite(pg, HIGH);
      delay(700);
  }

  digitalWrite(pg, LOW);
  digitalWrite(pr, HIGH);
  digitalWrite(cy,HIGH);
  delay(2000);


  digitalWrite(cy, LOW);
  digitalWrite(cr, LOW);
  digitalWrite(cg, HIGH);

  d = millis();
  
}

