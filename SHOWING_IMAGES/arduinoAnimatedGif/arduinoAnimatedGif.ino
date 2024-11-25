#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "lines.h"
#include "displayManager.h"


Adafruit_SSD1306 display(128, 64, &Wire, -1);
int currentFrame = 0;


void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3D); // could be 0x3C
  display.clearDisplay(); // Clear the buffer
}//end setup


void loop() {
  
  functionArray[frm]();
  frm++;
  if(frm == totalFrames){
    frm = 0;
  }

}//end loop