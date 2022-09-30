#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:

  // configure the USB serial monitor 
  Serial.begin(115200); 
 
  // configure pin D4 as a digital output - this is the LED 
  pinMode(D4, OUTPUT); 
 
  // set default PWM range 
  analogWriteRange(1023); 



}

void loop() {
  // put your main code here, to run repeatedly:

   // turn the LED ON 
  digitalWrite(D4, LOW); 
  // wait 1s 
  delay(1000); 
 
  // turn the LED OFF 
  digitalWrite(D4, HIGH); 
  // wait 1s 
  delay(1000);

  /*

    Description: This is the test for %75 duty cycle. The unit is in milliseconds. 


    // turn the LED ON 
    digitalWrite(D4, LOW); 

    // wait 1500 ms 
    delay(1500); 
 
    // turn the LED OFF 
    digitalWrite(D4, HIGH); 

    // wait 250 ms 
    delay(250);


  */


  /*

    // turn the LED ON 
    digitalWrite(D4, LOW);

    // wait 1ms 
    delay(1); 
 
    // turn the LED OFF 
    digitalWrite(D4, HIGH);

    // wait 9ms 
    delay(9); 


  */

  /*

    LAB QUESTIONS

    1. What's the total on and off duration?
      - For the above example, the total on and off duration is 0.01 seconds OR 10 milliseconds

    2. What's the duty cycle?
      - The duty cycle is 0.1%

    3. What's the effect on the LED?
      - Through the duty cycle, the LED will be more off than being on and the width of the pulse is going to change. 

  */


  /*

    int i; 
   
    for ( i=0; i<1024; ++i) { 

    // set the PWM pulse width 
    analogWrite(D4, i); 
 
    // wait 1ms to add DRAMA! 
    delay(1); 
    }

    Result: The LED on D1 mini will become dim and the cycle repeatedly continues. 

  */





}