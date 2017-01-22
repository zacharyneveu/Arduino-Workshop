// Arduino synth library absolute frequency example

//Hardware connections:

//                    +10µF 
//PIN 11 ---[ 1k ]--+---||--->> Audio out
//                  |
//                 === 10nF
//                  |
//                 GND


#include <synth.h>

synth edgar;    //-Make a synth

void setup() {

  edgar.begin();                                   //-Start it up
  edgar.setupVoice(0,TRIANGLE,60,ENVELOPE1,127,64);  //-Set up voice 0
  edgar.setupVoice(1,SINE,60,ENVELOPE3,127,64);
}

void loop()
{
  edgar.setFrequency(0,50.0);
  edgar.trigger(0);
  delay(500);
  edgar.setFrequency(1,70);
  edgar.trigger(1);
  delay(500);
  edgar.setFrequency(1, 140);
  edgar.trigger(1);
  edgar.setFrequency(0,100.0);
  edgar.trigger(0);
  delay(1000);
  edgar.setFrequency(0,50.0);
  edgar.trigger(0);
  delay(1000);
  edgar.setFrequency(0,100.0);
  edgar.trigger(0);
  delay(1000);
}
