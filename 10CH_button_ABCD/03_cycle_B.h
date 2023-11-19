
    
     //6  NEW CYCLE
     
     if (repeat == 1){

     //1
     digitalWrite(RED_L1, HIGH);
     digitalWrite(GREEN_L6, HIGH);
     digitalWrite(DONT_WALK_L9, HIGH); 
     delay(10000);

     //4
     digitalWrite(GREEN_L6, LOW);
     digitalWrite(YELLOW_L5, HIGH);
     delay(3000);

     //5
     digitalWrite(YELLOW_L5, LOW);
     digitalWrite(RED_L4, HIGH); 
     delay(2000);

     repeat = 0;

     }

     //6 NEW CYCLE

     digitalWrite(LED_PRESSED_BUTTON, LOW);
     
     digitalWrite(RED_L4, HIGH);
     digitalWrite(GREEN_L3, HIGH);
     digitalWrite(RED_L1, LOW);
     digitalWrite(WALK_L8, HIGH); 
     digitalWrite(DONT_WALK_L7, LOW); 
     delay(10000);

     //7
     digitalWrite(WALK_L8, LOW);
     digitalWrite(DONT_WALK_L7, HIGH); delay(500);
     digitalWrite(DONT_WALK_L7, LOW);  delay(500); 
     digitalWrite(DONT_WALK_L7, HIGH); delay(500);
     digitalWrite(DONT_WALK_L7, LOW);  delay(500); 
     digitalWrite(DONT_WALK_L7, HIGH); delay(500);
     digitalWrite(DONT_WALK_L7, LOW);  delay(500); 
     digitalWrite(DONT_WALK_L7, HIGH); delay(500);
     digitalWrite(DONT_WALK_L7, LOW);  delay(500); 
     digitalWrite(DONT_WALK_L7, HIGH); delay(500);
     digitalWrite(DONT_WALK_L7, LOW);  delay(500); 
     digitalWrite(DONT_WALK_L7, HIGH); delay(500);
     digitalWrite(DONT_WALK_L7, LOW);  delay(500); 
     digitalWrite(DONT_WALK_L7, HIGH); delay(500);
     digitalWrite(DONT_WALK_L7, LOW);  delay(500); 
     digitalWrite(DONT_WALK_L7, HIGH); delay(500);
     digitalWrite(DONT_WALK_L7, LOW);  delay(500); 
     digitalWrite(DONT_WALK_L7, HIGH); delay(500);
     digitalWrite(DONT_WALK_L7, LOW);  delay(500); 
     digitalWrite(DONT_WALK_L7, HIGH); delay(500);
     digitalWrite(DONT_WALK_L7, LOW);   

     //8
     digitalWrite(DONT_WALK_L7, HIGH); 
     delay(2000);

     //9
     digitalWrite(GREEN_L3, LOW);
     digitalWrite(YELLOW_L2, HIGH);
     delay(3000);

     //10
     digitalWrite(YELLOW_L2, LOW);
     digitalWrite(RED_L1, HIGH);
     delay(2000);
     digitalWrite(RED_L4, LOW);
     digitalWrite(DONT_WALK_L9, LOW); 

     if (digitalRead(2)!=0 && led==1) {new_event=1; goto x;}

     
     
