#include <FastLED.h>

#define LED_PIN    6
#define NUM_LEDS    60
#define LED_TYPE    WS2812B
//#define COLOR_ORDER RGB
//#define BRIGHTNESS          96
#define FRAMES_PER_SECOND  120

CRGB leds[NUM_LEDS];

void setup() {
 // FastLED.addLeds<LED_TYPE,LED_PIN,COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);

}

void loop() {

  fadeToBlackBy( leds, NUM_LEDS, 10);
  int pos = random16(NUM_LEDS);
  leds[pos] += CRGB ( 38, 167, 186);
  FastLED.show();  
  // insert a delay to keep the framerate modest
  FastLED.delay(4000/FRAMES_PER_SECOND); 
}
