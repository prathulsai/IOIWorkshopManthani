
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

String url_string;

const char* ssid     = "Net Lab";
const char* pass = "";

const char* server1 = "52.33.33.53";
const char* url1 = "GET /iot/api/user/ukey=DR0MIGCPSE8KPC1RUXJP9FXZQSOO1VTL&mode=248&skey=7PEC3RJV/";
WiFiClient client;
void setup() 
{
  pinMode(D0, OUTPUT); digitalWrite(D0, HIGH);
  
   Serial.begin(115200);
   Serial.println("Connecting to ");
   Serial.println(ssid);
   
   WiFi.begin(ssid, pass);
   
   while (WiFi.status() != WL_CONNECTED) 
   {
     delay(500);
     Serial.print(".");
   }
      Serial.println("");
      Serial.println("WiFi connected");
}

void loop() 
{
    url_string = String(url1);
    url_string += "in1=";
    url_string += String(analogRead(A0));
    url_string += "&in2=";
    url_string += String(0);
    url_string += "&in3=";
    url_string += String(0);
    url_string += "&in4=";
    url_string += String(0);
    url_string += " HTTP/1.1";
    
  if (client.connect(server1,80) ) {
    client.println(url_string);
    client.println("Host: 52.33.33.53"); 
    client.println("Connection: close");
    client.println();
    Serial.println(url_string);
    }

  
delay(5000);  
}



