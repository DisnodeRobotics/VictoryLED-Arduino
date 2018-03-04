#include "FastLED.h"

// How many leds in your strip?
#define NUM_LEDS 144

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 7
#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup()
{
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void yellowOn()
{
  int section = (NUM_LEDS / 2) - 25;
  for (int i = section; i < (section + 50); i++)
  {
    leds[i] = CRGB::Orange;
  }
  FastLED.show();
}

void yellowOff()
{
  int section = (NUM_LEDS / 2) - 25;
  for (int i = section; i < (section + 50); i++)
  {
    leds[i] = CRGB::Black;
  }
  FastLED.show();
}
void blueOn()
{
  int section = (NUM_LEDS / 2) + 25;
  for (int i = NUM_LEDS; i > section; i--)
  {
    leds[i] = CRGB::Blue;
  }
  FastLED.show();
  yellowOff();
}

void blueOff()
{
  int section = (NUM_LEDS / 2) + 25;
  for (int i = NUM_LEDS; i > section; i--)
  {
    leds[i] = CRGB::Black;
  }
  FastLED.show();
  yellowOn();
}

void redOn()
{
  int section = (NUM_LEDS / 2) - 25;
  for (int i = 0; i < section; i++)
  {
    leds[i] = CRGB::Red;
  }
  FastLED.show();
  yellowOff();
}

void redOff()
{
  int section = (NUM_LEDS / 2) - 25;
  for (int i = 0; i < section; i++)
  {
    leds[i] = CRGB::Black;
  }
  FastLED.show();
  yellowOn();
}

void loop()
{
  // Turn the LED on, then pause
  redOn();
  delay(50);
  redOff();
  delay(50);
  redOn();
  delay(50);
  redOff();
  delay(50);
  redOn();
  delay(50);
  redOff();
  delay(100);

  blueOn();
  delay(50);
  blueOff();
  delay(50);
  blueOn();
  delay(50);
  blueOff();
  delay(50);
  blueOn();
  delay(50);
  blueOff();
}
