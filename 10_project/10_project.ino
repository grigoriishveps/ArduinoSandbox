#include <Servo.h>
Servo s;
int x = 0;
int pos = 9;

void setup(){
  s.attach(pos);
}

void loop() {
  for (x = 0; x < 180; x+= 5)
  {
    s.write(x);
    delay(100);
  }
  for (x = 90; x != 0; x -= 5){
    s.write(x);
    delay(100);
  }
  s.write(0);
  delay(5000);
}
