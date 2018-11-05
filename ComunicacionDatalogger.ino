#include <ESP8266WiFi.h>
#include <PubSubClient.h>

const char* ssid = "Nodemcu";
const char* password = "ESP8266_12";
//DIRECCIÓN DE BROKER
const char* mqtt_server = "192.168.0.107";
//TOPICOS
const char* tVar = "datalogger/variables";
const char* tPWM = "datalogger/pwm";
const char* tRel = "datalogger/rel";


//VARIABLES PARA EL SERVIDOR
float t1 = 1;                      
float t2 = 2;         
float t3 = 3;         
float t4 = 4;         
float vIn = 5;
float iIn = 3;
float iPWM = 3;
float iRel = 3;
float vRel = 3;       
float vPWM = 3;
//VARIABLES PARA LA TARJETA DE CONTROL


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.available()){
t1 =Serial.parseFloat();
t2 =Serial.parseFloat();
t3 =Serial.parseFloat();
t4 =Serial.parseFloat();
tCompresor =Serial.parseFloat();
corriente = Serial.parseFloat();
voltaje = Serial.parseFloat();
resistencia = Serial.parseFloat();

}

}
