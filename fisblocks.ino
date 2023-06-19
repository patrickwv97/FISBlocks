#include "KWP.h"
#include "FISLib.h"

//FIS
#define pinENABLE 4
#define pinCLOCK 5
#define pinDATA 6
FISLib LCD(pinENABLE, pinCLOCK, pinDATA);


void setup(){
  Serial.begin(9600);
  for(int i=0; i<8; i++){
    LCD.showText("Willkommen");
    delay(2000);
  }
}

void loop(){
  LCD.showText("Hallo du", "KNECK!");
  delay(2000);
  LCD.showText("Lecki", "Cocki");
  delay(2000);
}
