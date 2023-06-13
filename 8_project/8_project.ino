int g = 13;
int d = 3;
int x = 0;

void blink(){
  x++;
}

void setup() {
  // put your setup code here, to run once:
  pinMode(g, OUTPUT);
  pinMode(d, INPUT);
  attachInterrupt(1,blink, RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (x){
    x = 0;
    digitalWrite(g, HIGH);
    delay(200);
  }
  else
    digitalWrite(g, LOW);
}


