#include <Servo.h>
Servo s;
int x = 0;
int w = 9;
int pos = 0;

void setup(){
  s.attach(w);
}

void loop() {
  s.write(0);
  x = analogRead(pos);
  x = map(x, 0, 1023, 0, 179);
  s.write(x);
  delay(10);
}
