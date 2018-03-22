/*
 ESP8266 Blink by Simon Peter
 Blink the blue LED on the ESP-01 module
 This example code is in the public domain
 
 The blue LED on the ESP-01 module is connected to GPIO1 
 (which is also the TXD pin; so we cannot use Serial.print() at the same time)
 
 Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/
int i;
void setup() {
 //pinMode(5, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
 analogWrite(5, 1024);delay(2000);
}

// the loop function runs over and over again forever
void loop() {

  //digitalWrite(5, HIGH);
  if(i == 750)
  {
    i = 0;
  }
  i++;
  analogWrite(5, i);
  delay(5);                      // Wait for two seconds (to demonstrate the active low LED)
}
