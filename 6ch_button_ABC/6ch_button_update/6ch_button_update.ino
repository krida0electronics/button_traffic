//
// ARDUINO NANO, ATMEGA328P, 16MHZ
// 
// library "OneButton.h"
//


#define LED_PRESSED_BUTTON 2
#define             RED_L1 3
#define          YELLOW_L2 4
#define           GREEN_L3 5
#define             RED_L4 6
#define          YELLOW_L5 7
#define           GREEN_L6 8



#include "OneButton.h"
#include <TimerOne.h>

OneButton button_A(14, true, false);         
OneButton button_B(15, true, false);   
OneButton button_C(16, true, false);  


unsigned char new_event, button, led;

void setup() {

  pinMode(LED_PRESSED_BUTTON, OUTPUT);
  pinMode(RED_L1, OUTPUT);
  pinMode(YELLOW_L2, OUTPUT);
  pinMode(GREEN_L3, OUTPUT);
  pinMode(RED_L4, OUTPUT);
  pinMode(YELLOW_L5, OUTPUT);
  pinMode(GREEN_L6, OUTPUT);

  button_A.attachLongPressStart(click1);
  button_B.attachLongPressStart(click2);
  button_C.attachLongPressStart(click3);
  
  button_B.attachDoubleClick(double_click_2);
  button_C.attachDoubleClick(double_click_3);


  Timer1.attachInterrupt(timerIsr);
  Timer1.initialize(5000); 


}

void timerIsr() {

  button_A.tick();
  button_B.tick();
  button_C.tick();
 

}

void click1() {
               new_event = 1;
               digitalWrite(LED_PRESSED_BUTTON, HIGH);
              }
              

void click2() { 
                new_event = 2; 
                digitalWrite(LED_PRESSED_BUTTON, HIGH);  
              }


void click3() { 
                new_event = 3; 
                digitalWrite(LED_PRESSED_BUTTON, HIGH);  
              }     


void double_click_2() {
                       new_event = 0;
                      }

void double_click_3() {
                       new_event = 0;
                      }                      
              

void loop() {
  

if (new_event == 0) {  
                     digitalWrite(LED_PRESSED_BUTTON, LOW);
                     #include "1_main_cycle.h" 
                    }

                    
if (new_event == 1) {  
                      digitalWrite(LED_PRESSED_BUTTON, LOW);
                      #include "1_main_cycle_olegs.h"              
                    }
 
 
if (new_event == 2) {
                     digitalWrite(LED_PRESSED_BUTTON, LOW);
                     #include "2_red_flash.h"
                    } 

if (new_event == 3) {
                     digitalWrite(LED_PRESSED_BUTTON, LOW);
                     #include "3_all_flash.h"
                    }                      


}


     

 
