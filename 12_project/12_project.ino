int gr = 0;
int br = 1;
int rr = 2;
int gw = 11;
int bw = 10;
int rw = 9;
int g;
int b;
int r;
void setup() {
  // put your setup code here, to run once:
  pinMode(gw, OUTPUT);
  pinMode(bw, OUTPUT);
  pinMode(rw, OUTPUT);
}

void loop() {
  g = analogRead(gr);
  b = analogRead(br);
  r = analogRead(rr);
  analogWrite(gw, g);
  analogWrite(bw, b);
  analogWrite(rw, r);
  delay(10);
}
