int green = 10;
int blue = 9;
int red = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
}
void color(int g, int b, int r){
  analogWrite(red, r);
  analogWrite(green, g);
  analogWrite(blue, b);
}
void loop() {
  // put your main code here, to run repeatedly:
  color(random(0, 255), random(0, 255), random(0, 255));
  delay(300);
}


