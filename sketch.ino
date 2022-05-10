#include <MD_MAX72xx.h>

// matrix controls
const byte data_pin = 11;
const byte chip_select_pin = 10;
const byte clock_pin = 13;
const byte max_devices = 4;

// creating matrix object
MD_MAX72XX matrix = MD_MAX72XX(MD_MAX72XX::PAROLA_HW, chip_select_pin, max_devices);

// define the joystick controls
const byte hpin = ;
const byte vpin = ;

void setup(){
  Serial.begin(9600);
  
}

void loop(){
 // put your main code here, to run repeatedly:
  
}
