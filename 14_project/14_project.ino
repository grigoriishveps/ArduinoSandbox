
#include <IRremote.h>
int RECV_PIN = 10;
int g = 11;
bool green = LOW;
IRrecv irrecv(RECV_PIN);
decode_results result;
void setup() {
  pinMode(g, OUTPUT);
  Serial.begin(9600); 
  irrecv.enableIRIn();
}
void loop() {
  if(irrecv.decode(&result)){
    Serial.println(result.value, HEX);
    if(result.value == 0xFD00FF) {
      green = !green;
      digitalWrite(g, green);
    }
    irrecv.resume();
  }
}

