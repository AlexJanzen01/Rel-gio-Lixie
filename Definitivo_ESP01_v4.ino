#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <NTPClient.h>
#include <WiFiUdp.h>
WiFiUDP ntpUDP;

//  token do blynk
char auth[] = "Código fornecido pelo BLINK";

// conexão e senha do WiFi
char ssid[] = "rede Wifi";
char pass[] = "Senha Wifi";

//Provedor de NTP
NTPClient timeClient(ntpUDP, "br.pool.ntp.org", 75600, 60000);

//declaração de variáveis
  int horaESP;
  int minutoESP;
  int segundoESP;
  int corr;
  int corg;
  int corb;
  int party;
  int rando;
  int funcao;
  int love;
  int internet;
  String recebi;
  String envio;
  String padR( String texto, int tamanho, char caractere = ' ' );
  String padL( String texto, int tamanho, char caractere = ' ' );
  String strZero( String texto, int tamanho );
  String replicate( char caractere, int vezes );
 

String padR( String texto, int tamanho, char caractere) {
  if (texto.length() > tamanho) {
     return texto.substring( texto.length() - tamanho, texto.length() );  
  } else {
     return replicate( caractere, tamanho - texto.length() ) + texto;  
  }
}

String padL( String texto, int tamanho, char caractere) {
  if (texto.length() > tamanho) {
     texto.remove( tamanho ); 
     return texto; 
  } else {
     return texto + replicate( caractere, tamanho - texto.length() );  
  }
}

String strZero( String texto, int tamanho ) {
  return padR( texto, tamanho, '0');
}

String replicate( char caractere, int vezes ) {
  String temp;

  for (int nL=0; nL < vezes; nL++) {
      temp += caractere;   
  }
  return temp;
}

//tratamento de pino virtual 

          BLYNK_WRITE(V1){
          int R = param.asInt();    
          corr = R;
          }
              BLYNK_WRITE(V2){
              int G = param.asInt();    
              corg = G;
              }
                 BLYNK_WRITE(V3){
                 int B = param.asInt();    
                 corb = B;   
                 }
                     BLYNK_WRITE(V6){
                     int P = param.asInt();    
                     party = P;   
                     }
                         BLYNK_WRITE(V7){
                         int R = param.asInt();    
                         rando = R;   
                         }
                             BLYNK_WRITE(V8){
                             int F = param.asInt();    
                             funcao = F;   
                             }
                                 BLYNK_WRITE(V9){
                                 int L = param.asInt();    
                                 love = L;   
                                 }

// sincroniza valores do blynk ao reiniciar
BLYNK_CONNECTED() {
    Blynk.syncVirtual(V1, V2, V3, V6, V7, V8, V9);
}
void setup() {

  //loga Blynk
  Blynk.begin(auth, ssid, pass);

  //inicia NTP
  timeClient.begin();

   // inicia serial
  Serial.begin(9600);
  Serial.setTimeout(20);
  Serial.flush();
 
}
void loop() {

    // inicia Blynk
  Blynk.run();

//Atualiza NTP
timeClient.update();

if (WiFi.status() != WL_CONNECTED)
{
  internet = 0;
}
else {
  internet = 1;
}


//definindo hora, minuto e segundo como variáveis
  horaESP = timeClient.getHours();
  minutoESP = timeClient.getMinutes();
  segundoESP = timeClient.getSeconds();

 //respondendo a pergunta do arduino

      if (Serial.available() > 0) {
      recebi = Serial.readString();

          if (recebi == "info"){
            envio = String (corr);
            Serial.print (strZero (envio,3));
            envio = String (corg);
            Serial.print (strZero (envio,3));
            envio = String (corb);
            Serial.print (strZero (envio,3));
            envio = String (horaESP);
            Serial.print (strZero (envio,2));
            envio = String (minutoESP);
            Serial.print (strZero (envio,2));
            envio = String (segundoESP);
            Serial.print (strZero (envio,2));
            envio = String (party);
            Serial.print (envio);   
            envio = String (rando);
            Serial.print (envio);      
            envio = String (funcao);
            Serial.print (envio);   
            envio = String (love);
            Serial.print (envio);
            envio = String (internet);
            Serial.print (envio);
            }
      }
}
