byte LEDS[5][10] = { { 1,0,0,0,0,0,0,0,0,1 },  // = 0
                     { 0,1,0,0,0,0,0,0,1,0 },
                     { 0,0,1,0,0,0,0,1,0,0 },
                     { 0,0,0,1,0,0,1,0,0,0 },
                     { 0,0,0,0,1,1,0,0,0,0 },                        
                     };
const int ledCount = 10;
int ledpin[] = {2,3,4,5,6,7,8,9,10,11};
byte digital;byte seg;

void setup() {               
  for(int thisled = 0; thisled < ledCount; thisled++){
    pinMode(ledpin[thisled], OUTPUT);
    }
}

void LEDSWRITE(byte digit) {
  byte pin = 2;
  for (byte seg = 0; seg < 10; ++seg) {
    digitalWrite(pin, LEDS[digit][seg]);
    ++pin;
  }
}

void loop() {
  LEDSWRITE(0);
  delay(50);
  LEDSWRITE(1);
  delay(50);
  LEDSWRITE(2);
  delay(50);
  LEDSWRITE(3);
  delay(50);
  LEDSWRITE(4);
  delay(50);
 LEDSWRITE(3);
  delay(50);
 LEDSWRITE(2);
 delay(50);
 LEDSWRITE(1);
  delay(50);
}

