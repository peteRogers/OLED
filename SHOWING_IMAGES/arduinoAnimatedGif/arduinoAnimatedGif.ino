#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "lines.h"
#include "displayManager.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);


void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3D); // could be 0x3C
  display.clearDisplay(); // Clear the buffer
 
}


void loop() {

  for (int i = 0; i < totalFrames; i++) {
    functionArray[i](); // Call each function in the array
  }
  //   for (int i = totalFrames-1; i > -1; i--) {
  //     functionArray[i]();
  // }
}
