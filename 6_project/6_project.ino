float a;
int b;
void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 180; i++){
  a = sin(i * 3.14 / 180);
  b = 2000 + int(i * 1000);
  tone(8, b);
  delay(2000);
  } 
}
