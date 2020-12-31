#define LOCATION "LugarDePrueba"
#define DEVICE_ID "Pruebas"
#define TOKEN "Token-de-Pruebas"
#undef CON_SUELO   // con sensor de humedad del suelo
#undef CON_UV
#undef CON_LLUVIA
#define PRESSURE_CORRECTION (1)  // HPAo/HPHh 647m
#define HUMEDAD_MIN  50  // valores de A0 para suelo seco y empapado
#define HUMEDAD_MAX  450
#define INTERVALO_CONEX 30000 //30 secs
