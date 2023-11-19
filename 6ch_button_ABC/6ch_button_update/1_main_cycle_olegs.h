

digitalWrite(YELLOW_L5, LOW); 
digitalWrite(RED_L4 , HIGH); digitalWrite(GREEN_L6 , HIGH);                  // GREEN + PEDESTRIAN GREEN
delay(19500);                                                                 //
digitalWrite(GREEN_L6 , LOW);                                                // PEDESTRIAN GREEN OFF after 4sec


digitalWrite(YELLOW_L5, HIGH); delay(750);                                   // PEDESTRIAN RED FLASH 1sec
digitalWrite(YELLOW_L5, LOW);  delay(750);                                   //
digitalWrite(YELLOW_L5, HIGH); delay(750);                                   // PEDESTRIAN RED FLASH 1sec
digitalWrite(YELLOW_L5, LOW);  delay(750);                                   //
digitalWrite(YELLOW_L5, HIGH); delay(750);                                   // PEDESTRIAN RED FLASH 1sec
digitalWrite(YELLOW_L5, LOW);  delay(750);                                   //
digitalWrite(RED_L4 , LOW);                                                  // GREEN turn off after 5sec

digitalWrite(GREEN_L3 , HIGH);                                               // GREEN ARROW on

digitalWrite(YELLOW_L5, HIGH); delay(750);                                   //
digitalWrite(YELLOW_L5, LOW);  delay(750);                                   // 6sec
digitalWrite(YELLOW_L5, HIGH); delay(750);                                   // 
digitalWrite(YELLOW_L5, LOW);  delay(750);                                   // 7sec
digitalWrite(YELLOW_L5, HIGH); delay(750);                                   // 
digitalWrite(YELLOW_L5, LOW);  delay(750);                                   // 8sec

  
digitalWrite(YELLOW_L5, HIGH);                                               // 9sec DONT WOLK RED
delay(3000);                                                                 // 10 sec

digitalWrite(GREEN_L3 , LOW);                                                // GREEN ARROW turn off 

digitalWrite(YELLOW_L2 , HIGH); delay(3000); digitalWrite(YELLOW_L2 , LOW);  // YELLOW on video
digitalWrite(RED_L1 , HIGH);    delay(19500); digitalWrite(RED_L1 , LOW);     // RED on video

if (digitalRead(2) == 0) {new_event = 0;}
