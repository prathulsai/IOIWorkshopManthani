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
  pinMode(D0, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
}

// the loop function runs over and over again forever
void loop() {

  

  if(Serial.available()){
    serial_data = Serial.readStringUntil('\r');
  }

  Serial.print("You Have Entered : "); Serial.println(serial_data);
  if(serial_data == "ON"){
    
    digitalWrite(D0, LOW);
    
  }
  else if(serial_data == "OFF"){
    digitalWrite(D0, HIGH);
    
  }
  delay(2000);                      // Wait for two seconds (to demonstrate the active low LED)
}
