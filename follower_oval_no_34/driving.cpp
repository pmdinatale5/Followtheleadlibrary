#include "Arduino.h"
#include "driving.h"


driving::driving(int leftfront , int leftback , int rightfront, 
      int rightback , int leftspeedpin , int rightspeedpin ){ //make the library become itself, constructor method (library name instead of setup)
      
      lb=leftback;
      lf=leftfront;
      rb=rightback;
      rf=rightfront;
      lsp=leftspeedpin;
      rsp=rightspeedpin;
        
      }
void driving::drive (int leftspeed, int rightspeed) {//drive
  if (leftspeed > 0) {
    digitalWrite(lb, LOW); //turned off
    digitalWrite(lf, HIGH); //turned on
  }
  else if (leftspeed < 0) {
    digitalWrite(lb, HIGH);
    digitalWrite(lf, LOW);
  }
  else if (leftspeed = 0) {
    digitalWrite(lb, LOW);
    digitalWrite(lf, LOW);
  }
  if (rightspeed > 0) {
    digitalWrite(rb, LOW);
    digitalWrite(rf, HIGH);
  }
  else if (rightspeed < 0) {
    digitalWrite(rb, HIGH);
    digitalWrite(rf, LOW);
  }
  else if (rightspeed = 0) {
    digitalWrite(rb, LOW);
    digitalWrite(rf, LOW);
  }
  analogWrite(lsp, abs(leftspeed));
  analogWrite(rsp, abs(rightspeed));
}
