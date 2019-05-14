#ifndef driving_h //if no one has defined this
#define driving_h// then define it here

# include "Arduino.h"

class driving //making a class
{
  public:
      driving(int leftfront = 11, int leftback = 10, int rightfront = 6, 
      int rightback = 5, int leftspeedpin = 3, int rightspeedpin = 9); //make the library become itself, constructor method (library name instead of setup)
      void drive (int leftspeed, int rightspeed);
      int lb, lf, rb, rf, lsp, rsp;
      
  private:
  
};
#endif

//library will make the thing that does the driving
