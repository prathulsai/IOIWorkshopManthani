/*
 ESP8266 Blink by Simon Peter
 Blink the blue LED on the ESP-01 module
 This example code is in the public domain
 
 The blue LED on the ESP-01 module is connected to GPIO1 
 (which is also the TXD pin; so we cannot use Serial.print() at the same time)
 
 Note that this sketch uses LED_BUILTIN to find the pin with the internal LED
*/

String serial_data;

void setup() {
  
  Serial.begin(9600);
  pinMode(D0, OUTPUT);
  //pinMode(D1, INPUT_PULLUP);
}

// the loop function runs over and over again forever
void loop() {

  Serial.println(analogRead(A0));
  //Serial.println(digitalRead(D1));
  delay(2000);                      // Wait for two seconds (to demonstrate the active low LED)
}
