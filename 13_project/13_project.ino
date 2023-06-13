int button = 3;
int relay = 2;
int rs = HIGH;
int bs;
int lbs = LOW;
int x;
int t;
void setup() {
  pinMode(button, INPUT);
  pinMode(relay, OUTPUT);
  digitalWrite(relay, rs);
}

void loop() {
  x = digitalRead(button);
  if (x!= lbs)
    t = millis();
  if ((millis() - t) > 10){
    if (x != bs)
      bs = x;
    if (bs == HIGH)
      rs = !rs;
      
  }
  digitalWrite(relay, rs);
  lbs = x;
}
