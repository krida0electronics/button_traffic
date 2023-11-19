


digitalWrite(RED_L4 , HIGH); digitalWrite(GREEN_L6 , HIGH);                  // GREEN + PEDESTRIAN GREEN
delay(4000);                                                                 //
digitalWrite(GREEN_L6 , LOW);                                                // PEDESTRIAN GREEN OFF after 4sec


digitalWrite(YELLOW_L5, HIGH); delay(500);                                   // PEDESTRIAN RED FLASH 1sec
digitalWrite(YELLOW_L5, LOW);  delay(500);                                   //
digitalWrite(RED_L4 , LOW);                                                  // GREEN turn off after 5sec

digitalWrite(GREEN_L3 , HIGH);                                               // GREEN ARROW on

digitalWrite(YELLOW_L5, HIGH); delay(500);                                   //
digitalWrite(YELLOW_L5, LOW);  delay(500);                                   // 6sec
digitalWrite(YELLOW_L5, HIGH); delay(500);                                   // 
digitalWrite(YELLOW_L5, LOW);  delay(500);                                   // 7sec
digitalWrite(YELLOW_L5, HIGH); delay(500);                                   // 
digitalWrite(YELLOW_L5, LOW);  delay(500);                                   // 8sec

  
digitalWrite(YELLOW_L5, HIGH);                                               // 9sec DONT WOLK RED
delay(2000);                                                                 // 10 sec
digitalWrite(YELLOW_L5, LOW);                                                //

digitalWrite(GREEN_L3 , LOW);                                                // GREEN ARROW turn off 

digitalWrite(YELLOW_L2 , HIGH); delay(2000); digitalWrite(YELLOW_L2 , LOW);  // YELLOW on video
digitalWrite(RED_L1 , HIGH);    delay(5000); digitalWrite(RED_L1 , LOW);     // RED on video
