
#include "OneButton.h"
#define LEDFLASHER 7
OneButton button1(3, true);

void setup() {
 pinMode(LEDFLASHER, OUTPUT); 
 
  button1.attachClick(click1);
  button1.attachDoubleClick(doubleclick1);
  button1.attachDuringLongPress(longPress1);
} 

void loop() {

  button1.tick();
  delay(10);
}

void click1() {
                     for (int i=1; i<=5; i=i+1) {     // Start our for loop
                              
                      digitalWrite(LEDFLASHER, HIGH); 
                      delay(200);
                       digitalWrite(LEDFLASHER, LOW); 
                      delay(200);
                     }
} // click1


void doubleclick1() {
                     for (int i=1; i<=15; i=i+1) { 
                                  
                       digitalWrite(LEDFLASHER, HIGH); 
                      delay(50);
                       digitalWrite(LEDFLASHER, LOW); 
                      delay(50); 
                       }

} // doubleclick1


void longPress1() {
   digitalWrite(LEDFLASHER, HIGH); 
} // longPress1
