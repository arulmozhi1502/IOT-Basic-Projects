// the setup function runs once when you press reset or power the board  
void setup() 
{ 
// initialize digital pin 13 as an output pinMode(13, OUTPUT); 
} 
 
// the loop function runs repeatedly forever 
 void loop() 
{ 
digitalWrite(9, HIGH); // turn the LED on (HIGH is the voltage level)  
delay(1000); // wait for a second 
digitalWrite(9, LOW); // turn the LED off by making the voltage LOW  
delay(1000); // wait for a second 
}
