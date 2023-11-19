//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  //
// ARDUINO NANO, ATMEGA328P, 16MHZ                                                                  //
//                                                                                                  //
// Library - "OneButton.h"                                                                          //
//                                                                                                  //
// Header files - 01_main_cycle.h, 02_cycle_A.h, 03_cycle_B.h, 04_red_flash.h, 05_all_flash.h       //
//                                                                                                  //
// 10 Channel Traffic light controller with 4 buttons                                               //
//                                                                                                  //
// button A, long press   - pedestrian cycle section A                                              //
// button B, long press   - pedestrian cycle section B                                              //
// button C, long press   - flash all RED colors                                                    //
// button C, double click - return from all red flash mode to the main cycle                        //
// button D, long press   - flash all colors                                                        //
// button D, double click - return from all color flash mode to the main cycle                      //
//                                                                                                  //
//                                                                                                  //
// WWW.IOTMUG.COM - visit us for more information                                                   //
//                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////

#define LED_PRESSED_BUTTON 2
#define             RED_L1 3
#define          YELLOW_L2 4
#define           GREEN_L3 5
#define             RED_L4 6
#define          YELLOW_L5 7
#define           GREEN_L6 8
#define       DONT_WALK_L7 9
#define            WALK_L8 10
#define       DONT_WALK_L9 11
#define            WALK_L10 12


#include "OneButton.h"
#include <TimerOne.h>

OneButton button_A(14, true, false);         
OneButton button_B(15, true, false);   
OneButton button_C(16, true, false);  
OneButton button_D(17, true, false);  

unsigned char new_event, button, led, repeat;

void setup() {

  pinMode(LED_PRESSED_BUTTON, OUTPUT);
  pinMode(RED_L1, OUTPUT);
  pinMode(YELLOW_L2, OUTPUT);
  pinMode(GREEN_L3, OUTPUT);
  pinMode(RED_L4, OUTPUT);
  pinMode(YELLOW_L5, OUTPUT);
  pinMode(GREEN_L6, OUTPUT);
  pinMode(DONT_WALK_L7, OUTPUT);
  pinMode(WALK_L8, OUTPUT);
  pinMode(DONT_WALK_L9, OUTPUT);
  pinMode(WALK_L10, OUTPUT);

  button_A.attachLongPressStart(click1);
  button_B.attachLongPressStart(click2);
  button_C.attachLongPressStart(click3);
  button_D.attachLongPressStart(click4);

  button_C.attachDoubleClick(double_click_3);
  button_D.attachDoubleClick(double_click_4);


  Timer1.attachInterrupt(timerIsr);
  Timer1.initialize(5000); 


}

void timerIsr() {

  button_A.tick();
  button_B.tick();
  button_C.tick();
  button_D.tick();
  
}

void click1() {
               new_event = 1; led=1;
               digitalWrite(LED_PRESSED_BUTTON, HIGH);
              }
              

void click2() { 
               new_event = 2; led=2;
               digitalWrite(LED_PRESSED_BUTTON, HIGH);  
              }


void click3() { 
               new_event = 3; led=3;
               digitalWrite(LED_PRESSED_BUTTON, HIGH); 
              }     

void click4() { 
               new_event = 4; led=4;
               digitalWrite(LED_PRESSED_BUTTON, HIGH);  
              }  

void double_click_3() {
                       new_event = 0;
                      }

void double_click_4() {
                       new_event = 0;
                      }                      
              

void loop() {
  
 
if (new_event == 0) {  
                     digitalWrite(LED_PRESSED_BUTTON, LOW);
                     #include "01_main_cycle.h" 
                    }

x:                 
if (new_event == 1) {  
                     digitalWrite(LED_PRESSED_BUTTON, LOW);
                     #include "02_cycle_A.h" 
                     
                     if (digitalRead(2)!=0 && led==1) {new_event=1;}
                     //if (digitalRead(2)!=0 && led==3) {new_event=3;}
                     //if (digitalRead(2)!=0 && led==4) {new_event=4;}
                     if (digitalRead(2)==0) {new_event = 0; led=0; } 
                             
                    }


if (new_event == 2) {  
                     #include "03_cycle_B.h" 
                     
                     if (digitalRead(2)!=0 && led==2) {new_event=2; repeat=1;} 
                     if (digitalRead(2)!=0 && led==3) {new_event=3;}
                     if (digitalRead(2)!=0 && led==4) {new_event=4;}
                     if (digitalRead(2)==0) {new_event = 0; led=0; } 

                    }                    
 
 
if (new_event == 3) {
                     digitalWrite(LED_PRESSED_BUTTON, LOW);
                     #include "04_red_flash.h"
                    } 

if (new_event == 4) {
                     digitalWrite(LED_PRESSED_BUTTON, LOW);
                     #include "05_all_flash.h"
                    }                      


}


     

 
