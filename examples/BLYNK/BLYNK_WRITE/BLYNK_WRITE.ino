/* Comment this out to disable prints and save space */

#define BLYNK_PRINT Serial



#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>



#define ledPin_1 D0



// ============= WiFi credentials =============== //

char ssid[] = "xxxxxxxxxxxx"; // 2.4G only

char pass[] = "xxxxxxxxxxxx";

/* [EX] char ssid[] = "AndriodAP"; */

/* [EX] char pass[] = "123456789"; */

// ============================================== //



// ================= Server ===================== //

IPAddress serverIP (xxx, xxx, xxx, xxx); // Your IP of Server

char auth[] = "xxxxxxx";

int port = xxxx; // int Value

/* [EX] IPAddress serverIP (192, 168, 1, 1);        */

/* [EX] char auth[] = "2dgykj59sfyY5asdJH58jsdfg4"; */

/* [EX] int port = 8080;                            */

// ============================================== //



BLYNK_WRITE(V1)

{

  //ค่าที่ได้จาก Widget_Button (V1) จะเป็น 0 และ 1 ถ้ามีการปดปุ่ม

  if (param.asInt() == 1) {

    

    //เรียกใช้เปิดไฟ LED

    digitalWrite(ledPin_1, HIGH);

  }

  else {

    

    //เรียกใช้ปิดไฟ LED

    digitalWrite(ledPin_1, LOW);

  }



}



void setup()

{

  // Debug console

  Serial.begin(115200);



  pinMode(ledPin_1, OUTPUT);



  Blynk.begin(auth, ssid, pass, serverIP, port);



}



void loop()

{

  Blynk.run();

}
