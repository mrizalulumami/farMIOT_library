
// By Rizalduino tech

// about this library:
// i have created some library for my project with name FarmIOT. This project will support you to make
// your agrotechnology with happy.
#ifndef farMIOT_h
#define farMIOT_h

#include "Arduino.h"
#include "FirebaseArduino.h"
#include "ESP8266WiFi.h"

class farMIOT
{
public:
    void farmiotKonfig();
    void kirimData(String path, String nilai);
    void getData(String path, String variabel);
};

#endif