#include "KWP.h"
#include "FISLib.h"

#define MAX_CONNECT_RETRIES 5
#define NENGINEGROUPS 7
#define NDASHBOARDGROUPS 1
#define NMODULES 2

//FIS
#define pinENABLE 4
#define pinCLOCK 5
#define pinDATA 6
FISLib LCD(pinENABLE, pinCLOCK, pinDATA);


void setup(){
  Serial.begin(9600);
  for(int i=0; i<8; i++){
    LCD.showText("Willkommen");
    delay(500);
  }
}

void loop(){
  LCD.showText("Hallo du", "KNECK!)
  delay(500)
}
