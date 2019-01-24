

#include <ESP8266WiFi.h>
#include<FirebaseArduino.h>     // Configurable, see typical pin layout above

#define FIREBASE_HOST "https://rfid-ec568.firebaseio.com/" //Your Firebase Project URL goes here without "http:" , "\" and "/"
#define FIREBASE_AUTH "IKv8nYUJERdfxLrmfLzZTBIieDQH1DgeYik3S6NA" //Your Firebase Database Secret goes here
#define WIFI_SSID "shiyad" //your WiFi SSID for which yout NodeMCU connects
#define WIFI_PASSWORD "iamshiyad"//Password of your wifi network 
 

 
void setup() { 
  
  Serial.begin(115200);
  
  
  WiFi.begin(WIFI_SSID,WIFI_PASSWORD);
  Serial.print("connecting");
  while (WiFi.status()!=WL_CONNECTED){
    Serial.print(".");
    delay(500);
  }
  Serial.println();
  Serial.print("connected:");
  Serial.println(WiFi.localIP());

 
}
void firebasereconnect()
{
  Serial.println("Trying to reconnect");
    Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  }
 
void loop() {
  
 
 
  
 

 


int str=124;
   
 

        Firebase.begin(FIREBASE_HOST,FIREBASE_AUTH);
  Firebase.pushString("ldd",str);//the variable in which is used in our Firebase and MIT App Inventor
  
  
   
 
 
  
 if (Firebase.failed()) {
      Serial.print("setting number failed:");
      Serial.println(Firebase.error());
      firebasereconnect();
      return;
  }
 
  

}

 
