int green = 10;
int t = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i =0;i < 255; i += t){
    analogWrite(green, i);
    delay(50);
  }
  for(int i = 255;i > 0; i -= t){
    analogWrite(green, i);
    delay(50);
  }
}
