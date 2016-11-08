

#include <LEDstrip.h>

LEDstrip myLEDstrip;

const int Rpin = 9;
const int Gpin = 10;
const int Bpin = 11;

int i;

void setup()
{
  myLEDstrip.DefineRGBLED(Rpin,Gpin,Bpin);

  myLEDstrip.SetRedLight(255);
  delay(500); 
  myLEDstrip.SetGreenLight(255);
  delay(500);
  myLEDstrip.SetBlueLight(255);
  delay(500);
  myLEDstrip.SetWhiteLight(255);
  delay(500);

  i=0;
}

void loop()
{
  if (i<=100) {
    myLEDstrip.SetRGBRandomColour(myLEDstrip.RedVal,myLEDstrip.GreenVal,myLEDstrip.BlueVal,50);
    delay(500);
  }
  else if (i==110) {
    myLEDstrip.LEDstripOFF();
    delay(100);
    myLEDstrip.SetWhiteLight(255);
    delay(100);
    myLEDstrip.LEDstripOFF();
    delay(100);
  }
  else if (i>110 && i<255) {
    myLEDstrip.SetHSLrandomColour(myLEDstrip.HueVal,10);
    delay(200);
  }
  else {
    i=-1;
  }
  
  i++;
}

