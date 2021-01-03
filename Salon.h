#define LOCATION "Pozuelo"
#define DEVICE_ID "Salon"
#define TOKEN "Token-del-Salon"
#define IS_BME280
#undef IP_FIJA
#ifdef IP_FIJA
  byte ip[] = {192,168,1,31};   
  byte gateway[] = {192,168,1,1};   
  byte subnet[] = {255,255,255,0};  
#endif
#undef  CON_LLUVIA  // con pluviómetro
#undef CON_UV
#undef CON_SUELO   // con sensor de humedad del suelo
#define PRESSURE_CORRECTION (1.080)  // HPAo/HPHh 647m
//#define PRESSURE_CORRECTION (1.0)  // HPAo/HPHh 0m
#define HUMEDAD_MIN  100  // valores de A0 para suelo seco y empapado
#define HUMEDAD_MAX  600
#define INTERVALO_CONEX 58000 // 5 min en milisecs
