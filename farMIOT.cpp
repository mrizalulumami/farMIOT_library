// By Rizalduino tech

// about this library:
// i have created some library for my project with name FarmIOT. This project will support you to make
// your agrotechnology with happy.

#include "Arduino.h"
#include "farMIOT.h"
#include "FirebaseArduino.h"
#include "ESP8266WiFi.h"

void farMIOT::farmiotKonfig()
{
    //kinfigurasi firebase
    const char *FIREBASE_HOST = "efarm-c1b94-default-rtdb.firebaseio.com";
    const char *FIREBASE_AUTH = "I1LwOdIOCxZH01jjYYT69HqlbN4px3DySVpTxm3Y";
    Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
}

void farMIOT::kirimData(String path, String nilai)
{
    Firebase.setString("message", "hello world");
    Firebase.setString("Monitor/" + path, nilai);
    if (Firebase.failed())
    {
        Serial.print("kirim data gagal!");
        Serial.println(Firebase.error());
        return;
    }
}

void farMIOT::getData(String path, String variabel)
{
    String nilai = Firebase.getString("Monitor/" + path + "/" + variabel);
    Serial.print("Nilainya adlah:");
    Serial.println(nilai);
}