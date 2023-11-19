//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  //
// ARDUINO NANO, ATMEGA328P, 16MHZ                                                                  //
//                                                                                                  //
// Library - "OneButton.h"                                                                          //
//                                                                                                  //
// 3 Channel Traffic light controller with 2 buttons                                                //
//                                                                                                  //
// button A, long press   - flash RED color                                                         //
// button B, long press   - flash all colors                                                        //
// button A, double click - return from red flash mode to the main cycle                            //
// button B, double click - return from all color flash mode to the main cycle                      //
//                                                                                                  //
// WWW.IOTMUG.COM - visit us for more information                                                   //
//                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////


#define LED_PRESSED_BUTTON 2
#define             RED_L1 3
#define          YELLOW_L2 4
#define           GREEN_L3 5


#include "OneButton.h"
#include <TimerOne.h>

OneButton button_A(14, true, false);         
OneButton button_B(15, true, false);   


unsigned char new_event;

void setup() {

  pinMode(LED_PRESSED_BUTTON, OUTPUT);
  pinMode(RED_L1, OUTPUT);
  pinMode(YELLOW_L2, OUTPUT);
  pinMode(GREEN_L3, OUTPUT);

  button_A.attachLongPressStart(click1);
  button_B.attachLongPressStart(click2);
  
  button_A.attachDoubleClick(double_click_1);
  button_B.attachDoubleClick(double_click_2);


  Timer1.attachInterrupt(timerIsr);
  Timer1.initialize(5000); 

}

void timerIsr() {

  button_A.tick();
  button_B.tick();

}

void click1() {
               new_event = 1;
               digitalWrite(LED_PRESSED_BUTTON, HIGH);
              }
              

void click2() { 
                new_event = 2; 
                digitalWrite(LED_PRESSED_BUTTON, HIGH);  
              }



void double_click_1() {
                       new_event = 0;
                      }

void double_click_2() {
                       new_event = 0;
                      }                      
              

void loop() {
  

if (new_event == 0) {  
                     digitalWrite(LED_PRESSED_BUTTON, LOW);
                     
                     digitalWrite(GREEN_L3, HIGH);  delay(10000); digitalWrite(GREEN_L3, LOW);  // Green light ON
                     digitalWrite(YELLOW_L2, HIGH); delay(2000);  digitalWrite(YELLOW_L2, LOW); // Yellow light ON
                     digitalWrite(RED_L1, HIGH);    delay(10000); digitalWrite(RED_L1, LOW);    // Red light ON
                    }

                    
if (new_event == 1) {  
                      digitalWrite(LED_PRESSED_BUTTON, LOW);

                      digitalWrite(RED_L1, HIGH);    delay(500);
                      digitalWrite(RED_L1, LOW);     delay(500);                 
                    }
 
 
if (new_event == 2) {
                     digitalWrite(LED_PRESSED_BUTTON, LOW);

                     digitalWrite(RED_L1, HIGH);  
                     digitalWrite(YELLOW_L2, HIGH);  
                     digitalWrite(GREEN_L3, HIGH);  

                     delay(500);

                     digitalWrite(RED_L1, LOW);  
                     digitalWrite(YELLOW_L2, LOW);  
                     digitalWrite(GREEN_L3, LOW); 

                     delay(500);          
                    } 



}


     

 
