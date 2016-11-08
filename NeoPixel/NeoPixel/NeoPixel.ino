#include <SoftwareSerial.h>
#include <Adafruit_NeoPixel.h>
#include <avr/power.h>

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PIN            2

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      12

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(9600);
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
// End of trinket special code

pixels.begin(); // This initializes the NeoPixel library.

}

int   animation = 0;
float  startTime = 0;
float time      = 0;
float frac;
int i;
float pixnum  = NUMPIXELS;
int pri =0;
int reset= 0;
int count =0;
int fill    = pixnum-1;
float clcount = 255/(pixnum/2);
float r=clcount;
float g=255;
float b=0.0;

// the loop routine runs over and over again forever:
void loop()
{
  for (int i=0;i < pixnum;i++)
  {
    setrgb(i,225,255,0);
    //pixels.setPixelColor(i, pixels.Color(225, 255, 0));
    //pixels.show();
    
      pri = i-1;
    
      setrgb(pri, 145, 0, 153);
    
    count = i;
  }
  if ((count == fill && fill >= 0) || count > -1)
  {
    if (255.0 != r || r < 255)
    {
      r = r+clcount;
    }
    else
    {
      g = g-clcount;
    }
    
    if ( r <= 255 && g >= 0)
    {
    setrgb(fill, r, g, b);
    fill = fill-1;
    pixnum = pixnum-1;
    }
    else
    {
      if( g <0)
      {
        g = 0;
      }
      else
      {
        r=255;
      }
      setrgb(fill, r, g, b);
      pixnum = pixnum-1;
    }
  }

}

void setrgb(int v,float r, float g, float b)
{
  
  pixels.setPixelColor(v, pixels.Color(r, g, b));
  pixels.show();
  delay(70);
}


