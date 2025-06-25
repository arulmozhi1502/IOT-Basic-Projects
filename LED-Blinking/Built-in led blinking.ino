// the setup function runs once when you power the board  
void setup() 
{ 
// initialize digital pin 13 as an output because it connected to the arduino led
  pinMode(13, OUTPUT); 
} 
 
// the loop function runs repeatedly forever 
void loop() 
{ 
digitalWrite(13, HIGH); // turn the LED on (HIGH is the voltage level)  
delay(1000); // wait for a second 
digitalWrite(13, LOW); // turn the LED off by making the voltage LOW  
delay(1000); //wait for a second
}
