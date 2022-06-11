#define LAYOUT_TURKISH
//#include "DigiKeyboard.h"
#include <DigiKeyboard.h>
void setup() {
  // don't need to set anything up to use DigiKeyboard
  DigiKeyboard.delay(1000);

  
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT | MOD_CONTROL_LEFT); 

  DigiKeyboard.delay(100);
  
  DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT);
  // Type out this string letter by letter on the computer (assumes US-style
  // keyboard)
  DigiKeyboard.delay(100);
  DigiKeyboard.println("powershell");
  DigiKeyboard.delay(500);
  //DigiKeyboard.println("taskkill /im servisatk.exe /f");
  DigiKeyboard.println("Get-Process");
  DigiKeyboard.delay(10000);
  DigiKeyboard.sendKeyStroke(KEY_LEFT, MOD_GUI_LEFT | MOD_CONTROL_LEFT); 

  //DigiKeyboard.println("explorer.exe");
  //DigiKeyboard.delay(100);
}
// https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json
// http://digistump.com/package_digistump_index.json
// https://github.com/rsrdesarrollo/DigistumpArduino/

void loop() {
  // this is generally not necessary but with some older systems it seems to
  // prevent missing the first character after a delay:
  
  
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
}
