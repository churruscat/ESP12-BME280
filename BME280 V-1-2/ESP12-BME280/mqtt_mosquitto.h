#include <ESP8266WiFi.h>
#define MQTT_MAX_PACKET_SIZE 455 //cambialo antes de incluir docpatth\Arduino\libraries\pubsubclient-master\src\pubsubclient.h
#define MQTT_KEEP_ALIVE 60
#include <PubSubClient.h> // https://github.com/knolleary/pubsubclient/releases/tag/v2.3
#include <ArduinoJson.h> // https://github.com/bblanchon/ArduinoJson/releases/tag/v5.0.7
#include <Pin_NodeMCU.h>

/*************************************************
 ** -------- Valores Personalizados ----------- **
 * ***********************************************/
#define DEVICE_TYPE "ESP12E-Riego"
#define ORG "canMorras"
char* ssid;
char* password;
char ssid1[] = "";
char password1[] = "";
char ssid2[] = "";
char password2[] = "";

/*************************************************
 ** ----- Fin de Valores Personalizados ------- **
 * ***********************************************/
#define ESPERA_NOCONEX 60000  // cuando no hay conexion, descanso un minuto
char server[] = "192.168.1.11";
char * authMethod = NULL;
char * token = NULL;
char clientId[] = "d:" ORG ":" DEVICE_TYPE ":" DEVICE_ID;

char publishTopic[] = "meteo/envia";  // el dispositivo envia datos a Mosquitto
char metadataTopic[]= "meteo/envia/metadata"; //el dispositivo envia sus metadatos a Mosquitto
char updateTopic[]  = "meteo/update";    // Mosquitto o node-red me actualiza los metadatos
char responseTopic[]= "meteo/response";
char rebootTopic[]  = "meteo/reboot";



