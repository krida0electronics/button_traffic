     
     
     //1
     digitalWrite(RED_L1, HIGH); 
     digitalWrite(DONT_WALK_L7, HIGH);
     digitalWrite(GREEN_L6, HIGH);
     digitalWrite(DONT_WALK_L9, LOW);
     digitalWrite(WALK_L10, HIGH);
     delay(10000);

     //2
     digitalWrite(WALK_L10, LOW);

     digitalWrite(DONT_WALK_L9, HIGH); delay(500);
     digitalWrite(DONT_WALK_L9, LOW);  delay(500);
     digitalWrite(DONT_WALK_L9, HIGH); delay(500);
     digitalWrite(DONT_WALK_L9, LOW);  delay(500);
     digitalWrite(DONT_WALK_L9, HIGH); delay(500);
     digitalWrite(DONT_WALK_L9, LOW);  delay(500);
     digitalWrite(DONT_WALK_L9, HIGH); delay(500);
     digitalWrite(DONT_WALK_L9, LOW);  delay(500);
     digitalWrite(DONT_WALK_L9, HIGH); delay(500);
     digitalWrite(DONT_WALK_L9, LOW);  delay(500);
     digitalWrite(DONT_WALK_L9, HIGH); delay(500);
     digitalWrite(DONT_WALK_L9, LOW);  delay(500);
     digitalWrite(DONT_WALK_L9, HIGH); delay(500);
     digitalWrite(DONT_WALK_L9, LOW);  delay(500);
     digitalWrite(DONT_WALK_L9, HIGH); delay(500);
     digitalWrite(DONT_WALK_L9, LOW);  delay(500);
     digitalWrite(DONT_WALK_L9, HIGH); delay(500);
     digitalWrite(DONT_WALK_L9, LOW);  delay(500);
     digitalWrite(DONT_WALK_L9, HIGH); delay(500);
     digitalWrite(DONT_WALK_L9, LOW);

     //3
     digitalWrite(DONT_WALK_L9, HIGH); 
     delay(2000);

     //4
     
     digitalWrite(GREEN_L6, LOW);
     digitalWrite(YELLOW_L5, HIGH);
     delay(3000);

     //5
     digitalWrite(YELLOW_L5, LOW);
     digitalWrite(RED_L4, HIGH); 
     delay(2000);

     if (digitalRead(2)!=0 && led==2) {new_event=2; goto x;}

     if (digitalRead(2)!=0 && led==3) {new_event=3; goto x;}
     if (digitalRead(2)!=0 && led==4) {new_event=4; goto x;}

     //6  
     // NEW CYCLE
     digitalWrite(GREEN_L3, HIGH);
     digitalWrite(RED_L1, LOW);
     delay(10000);

   
     //9
     digitalWrite(GREEN_L3, LOW);
     digitalWrite(YELLOW_L2, HIGH);
     delay(3000);

     //10
     digitalWrite(YELLOW_L2, LOW);
     digitalWrite(RED_L1, HIGH);
     delay(2000);
     digitalWrite(RED_L4, LOW);

     
