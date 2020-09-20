//https://www.amazon.com/gp/product/B01CP18J4A/ref=ppx_yo_dt_b_asin_title_o00_s00?ie=UTF8&psc=1\//

#include <Stepper.h>
#define IN1 9
#define IN2 10
#define IN3 11
#define IN4 12

const int stepsPerRevolution=2048; // 2048 steps
Stepper stepy(stepsPerRevolution, 9, 11, 10, 12); 
// Pins in example script were: 8, 9, 10, 11. 
// Notes: Pins are NOT set-up that way, pins in index 0 and 1 are switched!!

void setup(){
  //set speed:
//  stepy.setSpeed(10);
  stepy.setSpeed(1);
  Serial.begin(9600);
}// end setup

void loop(){
  stepy.step(stepsPerRevolution);
  delay(200);
}
