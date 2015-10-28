/*Written by Donnie Plumly. This code is created from the Button example. The 10M ohm SW-18010P (vibration sensor)
  works the same as a pushbutton.     
  Feel free to use this code for your project. 
      
      Circuit setup:
      Vibration Sensor- GND to GND
                        POS to 1k resistor to pin 2
      
      IR Led -          POS to 9
                        GND to GND
                        
      Led -             Pin 13
                    
*/
#include <multiCameraIrControl.h>


const int VibrationPin = 2;     // the number of the vibration pin
const int ledPin =  13;      // the number of the LED pin for visual indication
Canon D5(9);

// variables will change:
int vibrationState = 0;         // variable for reading the pushbutton status

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(VibrationPin, INPUT);
}

void loop() {
  vibrationState = digitalRead(VibrationPin);     // read the state of the pushbutton value:


  if (vibrationState == HIGH) {
    // turn LED on:
    D5.shutterDelayed();
    digitalWrite(ledPin, HIGH);
    delay(20);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
