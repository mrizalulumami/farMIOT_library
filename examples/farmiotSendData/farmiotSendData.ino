/*By Rizalduino tech

about this library:
i have created some library for my project with name FarmIOT. This project will support you to make
your agrotechnology with happy.
*/


//include your board end library FarmIOT
#include <farMIOT.h>

//this is my using board
#include <ESP8266WiFi.h>



//declarating your wifi ssid and password
#ifndef STASSID
#define STASSID "OPPO"        // SSID
#define STAPSK  "12345678"        // Pass
#endif
const char* ssid = STASSID;
const char* password = STAPSK;

//this is example for initializing value for your table in database
String path="Rizal/namaBelakang"; //path on your database
String nilai="Umami";//this is example value

//mak variable from constructor FarmIOT
farMIOT farm;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  //koneksi ke wifi
  Serial.println();
  Serial.print("connecting to ");
  Serial.println(ssid);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

//this is function for initializing config from FarmIOT
  farm.farmiotKonfig();

}

void loop() {
  // put your main code here, to run repeatedly:

  //this is function if you need to send data to your database with some value from your sensor
  farm.kirimData(path,nilai);
  delay(3000);

}
