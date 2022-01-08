#include <Adafruit_NeoPixel.h>

int LEDPIN = 6; // pino de saida do sinal
int NUMPIXELS = 81; // QUANTIDADE DE leds

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, LEDPIN, NEO_RGB + NEO_KHZ800); // configura a biblioteca NeoPixel

int segundo;
int contador = 0;
int sepbow = 2; // de 1 à 6
int corra ;
int corga ;
int corba ;
int corrb ;
int corgb ;
int corbb ;
int corrc ;
int corgc ;
int corbc ;
int corrd ;
int corgd ;
int corbd ;
int corre ;
int corge ;
int corbe ;
int corrf ;
int corgf ;
int corbf ;
int corrg ;
int corgg ;
int corbg ;
int corrh ;
int corgh ;
int corbh ;
int corri ;
int corgi ;
int corbi ;
int hora1;
int hora2;
int minuto1;
int minuto2;
int party ;
int rainbow ;
int love ;
int internet;
int posicao = 0 ;
int rando ;
int acrer ;
int acreg ;
int acreb ;
int acresec = 0;
int tempo1 = (130); // delay de efeito
String recebi;
String convert;

int posh1a [10]{80,75,76,74,77,73,78,72,79,71};
int posh1b [10]{70,65,66,64,67,63,68,62,69,61};
int posh2a [10]{60,55,56,54,57,53,58,52,59,51};
int posh2b [10]{50,45,46,44,47,43,48,42,49,41};
int posm1a [10]{39,34,35,33,36,32,37,31,38,30};
int posm1b [10]{29,24,25,23,26,22,27,21,28,20};
int posm2a [10]{19,14,15,13,16,12,17,11,18,10};
int posm2b [10]{9,4,5,3,6,2,7,1,8,0};
int variar [120]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,15,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,15,10,5,0};
int variag [120]{5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,15,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,15,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int variab [120]{95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,15,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,95,90,85,80,75,70,65,60,55,50,45,40,35,30,25,20,15,10,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100};

void LigaLed ( int posi, int g, int r, int b){
 pixels.setPixelColor(posi,r,g,b);
}

void AtuaLed (){
 LigaLed (posh1a[hora1],corra,corga,corba);
 LigaLed (posh1b[hora1],corrb,corgb,corbb);
 LigaLed (posh2a[hora2],corra,corga,corba);
 LigaLed (posh2b[hora2],corrb,corgb,corbb);
 LigaLed (posm1a[minuto1],corra,corga,corba);
 LigaLed (posm1b[minuto1],corrb,corgb,corbb);
 LigaLed (posm2a[minuto2],corra,corga,corba);
 LigaLed (posm2b[minuto2],corrb,corgb,corbb);
}

void setup() {

  //inicia a biblioteca NeoPixel
 pixels.begin(); 
  
  // inicia serial
 Serial.begin(9600);
 Serial.setTimeout(20);
 pixels.fill(); 
 pixels.show();

// repete show 120x
for (int i = 0; i <= 120; i++) {

pixels.fill(); 

posicao = posicao + 1;

if (posicao == 1) {
hora1 = 1;
hora2 = 3;
minuto1 = 5;
minuto2 = 7;
}
if (posicao == 2) {
hora1 = 2;
hora2 = 4;
minuto1 = 6;
minuto2 = 8;
}
if (posicao == 3) {
hora1 = 3;
hora2 = 5;
minuto1 = 7;
minuto2 = 9;
}
if (posicao == 4) {
hora1 = 4;
hora2 = 6;
minuto1 = 8;
minuto2 = 0;
}
if (posicao == 5) {
hora1 = 5;
hora2 = 7;
minuto1 = 9;
minuto2 = 9;
}
if (posicao == 6) {
hora1 = 6;
hora2 = 8;
minuto1 = 0;
minuto2 = 8;
}
if (posicao == 7) {
hora1 = 7;
hora2 = 9;
minuto1 = 9;
minuto2 = 7;
}
if (posicao == 8) {
hora1 = 8;
hora2 = 0;
minuto1 = 8;
minuto2 = 6;
}
if (posicao == 9) {
hora1 = 9;
hora2 = 9;
minuto1 = 7;
minuto2 = 5;
}
if (posicao == 10) {
hora1 = 0;
hora2 = 8;
minuto1 = 6;
minuto2 = 4;
}
if (posicao == 11) {
hora1 = 9;
hora2 = 7;
minuto1 = 5;
minuto2 = 3;
}
if (posicao == 12) {
hora1 = 8;
hora2 = 6;
minuto1 = 4;
minuto2 = 2;
}
if (posicao == 13) {
hora1 = 7;
hora2 = 5;
minuto1 = 3;
minuto2 = 1;
}
if (posicao == 14) {
hora1 = 6;
hora2 = 4;
minuto1 = 2;
minuto2 = 2;
}
if (posicao == 15) {
hora1 = 5;
hora2 = 3;
minuto1 = 1;
minuto2 = 3;
}
if (posicao == 16) {
hora1 = 4;
hora2 = 2;
minuto1 = 2;
minuto2 = 4;
}
if (posicao == 17) {
hora1 = 3;
hora2 = 1;
minuto1 = 3;
minuto2 = 5;
}
if (posicao == 18) {
hora1 = 2;
hora2 = 2;
minuto1 = 4;
minuto2 = 6;
}

      // variando as cores pouco a pouco em cada loop
    corra = (corra + variar[acresec + sepbow * 0 ]) / 2;
    corga = (corga + variag[acresec + sepbow * 0 ]) / 2;
    corba = (corba + variab[acresec + sepbow * 0 ]) / 2;
    corrb = (corrb + variar[acresec + sepbow * 1 ]) / 2;
    corgb = (corgb + variag[acresec + sepbow * 1 ]) / 2;
    corbb = (corbb + variab[acresec + sepbow * 1 ]) / 2;
    corrc = (corrc + variar[acresec + sepbow * 2 ]) / 2;
    corgc = (corgc + variag[acresec + sepbow * 2 ]) / 2;
    corbc = (corbc + variab[acresec + sepbow * 2 ]) / 2;
    corrd = (corrd + variar[acresec + sepbow * 3 ]) / 2;
    corgd = (corgd + variag[acresec + sepbow * 3 ]) / 2;
    corbd = (corbd + variab[acresec + sepbow * 3 ]) / 2;
    corre = (corre + variar[acresec + sepbow * 4 ]) / 2;
    corge = (corge + variag[acresec + sepbow * 4 ]) / 2;
    corbe = (corbe + variab[acresec + sepbow * 4 ]) / 2;
    corrf = (corrf + variar[acresec + sepbow * 5 ]) / 2;
    corgf = (corgf + variag[acresec + sepbow * 5 ]) / 2;
    corbf = (corbf + variab[acresec + sepbow * 5 ]) / 2;
    corrg = (corrg + variar[acresec + sepbow * 6 ]) / 2;
    corgg = (corgg + variag[acresec + sepbow * 6 ]) / 2;
    corbg = (corbg + variab[acresec + sepbow * 6 ]) / 2;
    corrh = (corrh + variar[acresec + sepbow * 7 ]) / 2;
    corgh = (corgh + variag[acresec + sepbow * 7 ]) / 2;
    corbh = (corbh + variab[acresec + sepbow * 7 ]) / 2;
    corri = (corri + variar[acresec + sepbow * 8 ]) / 2;
    corgi = (corgi + variag[acresec + sepbow * 8 ]) / 2;
    corbi = (corbi + variab[acresec + sepbow * 8 ]) / 2;

                      LigaLed (posh1a[hora1],corra,corga,corba);
                      LigaLed (posh1b[hora1],corrb,corgb,corbb);
                      LigaLed (posh2a[hora2],corrc,corgc,corbc);
                      LigaLed (posh2b[hora2],corrd,corgd,corbd);
                            
                      LigaLed (posm1a[minuto1],corrf,corgf,corbf);
                      LigaLed (posm1b[minuto1],corrg,corgg,corbg);
                      LigaLed (posm2a[minuto2],corrh,corgh,corbh);
                      LigaLed (posm2b[minuto2],corri,corgi,corbi);

    acresec = acresec + 1;
    if (acresec > 60) {
      acresec =0;
      }

if (posicao > 17) {
posicao = 0;
}

AtuaLed();
pixels.show();

delay(50);

}

 pixels.fill(); 
 AtuaLed();

  //perguntando valores para ESP01
 Serial.flush();
 Serial.print ("info");
 delay(200);
 
  recebi  = Serial.readString();
     convert = (recebi.substring(9,10));
     hora1   = convert.toInt();
     convert = (recebi.substring(10,11));
     hora2   = convert.toInt();
     convert = (recebi.substring(11,12));
     minuto1 = convert.toInt();
     convert = (recebi.substring(12,13));
     minuto2 = convert.toInt();
     convert = (recebi.substring(13,15));
     segundo = convert.toInt();
     convert = (recebi.substring(15,16));
     party   = convert.toInt();
     convert = (recebi.substring(16,17));
     rando   = convert.toInt();
     convert = (recebi.substring(17,18));
     rainbow = convert.toInt();
     convert = (recebi.substring(18,19));
     love    = convert.toInt();     
     convert = (recebi.substring(19,20));
     internet= convert.toInt();
}

void loop() {

  //perguntando valores para ESP01
 Serial.flush();
 Serial.print ("info");
 delay(200);

  //apagando todos o leds
 pixels.fill(); 

  //se tiver sinal do ESP
 if(Serial.available() < 25 && internet == 1 && Serial.available() > 10 ) {
  if(love == 0){
   if(rainbow == 0){
    if(rando == 0){
     if(party == 0){
      //lê string do ESP e salva nas variáveis
     recebi  = Serial.readString();
     convert = (recebi.substring(0,3));
     corra   = convert.toInt();
     convert = (recebi.substring(3,6));
     corga   = convert.toInt();
     convert = (recebi.substring(6,9));
     corba   = convert.toInt();
     convert = (recebi.substring(9,10));
     hora1   = convert.toInt();
     convert = (recebi.substring(10,11));
     hora2   = convert.toInt();
     convert = (recebi.substring(11,12));
     minuto1 = convert.toInt();
     convert = (recebi.substring(12,13));
     minuto2 = convert.toInt();
     convert = (recebi.substring(13,15));
     segundo = convert.toInt();
     convert = (recebi.substring(15,16));
     party   = convert.toInt();
     convert = (recebi.substring(16,17));
     rando   = convert.toInt();
     convert = (recebi.substring(17,18));
     rainbow = convert.toInt();
     convert = (recebi.substring(18,19));
     love    = convert.toInt();     
     convert = (recebi.substring(19,20));
     internet= convert.toInt();
     
      //iguala cora e corb
     corrb = corra;
     corgb = corga;
     corbb = corba;

      //nos segundos pares acende o ":"
     if (segundo%2==0){
       LigaLed (40,corra/3,corga/3,corba/3);
     }
     AtuaLed();
   }
   else{
      // se paty mode estiver ligado, diferencia cores cora e corb
     recebi  = Serial.readString();
     convert = (recebi.substring(0,3));
     corrb   = convert.toInt();
     convert = (recebi.substring(3,6));
     corgb   = convert.toInt();
     convert = (recebi.substring(6,9));
     corbb   = convert.toInt();
     convert = (recebi.substring(9,10));
     hora1   = convert.toInt();
     convert = (recebi.substring(10,11));
     hora2   = convert.toInt();
     convert = (recebi.substring(11,12));
     minuto1 = convert.toInt();
     convert = (recebi.substring(12,13));
     minuto2 = convert.toInt();
     convert = (recebi.substring(13,15));
     segundo = convert.toInt();
     convert = (recebi.substring(15,16));
     party   = convert.toInt();
     convert = (recebi.substring(16,17));
     rando   = convert.toInt();
     convert = (recebi.substring(17,18));
     rainbow = convert.toInt();
     convert = (recebi.substring(18,19));
     love    = convert.toInt();     
     convert = (recebi.substring(19,20));
     internet= convert.toInt();

     
      // varia o ":" entre cor a e corb)
     LigaLed (40,corrb/2,corgb/2,corbb/2);

     if (segundo%2==0){
       LigaLed (40,corra/3,corga/3,corba/3);
     }
     AtuaLed();
   }
 }
 else{
   // se rando estiver ligado, as cores variam
     recebi  = Serial.readString();
     convert = (recebi.substring(9,10));
     hora1   = convert.toInt();
     convert = (recebi.substring(10,11));
     hora2   = convert.toInt();
     convert = (recebi.substring(11,12));
     minuto1 = convert.toInt();
     convert = (recebi.substring(12,13));
     minuto2 = convert.toInt();
     convert = (recebi.substring(13,15));
     segundo = convert.toInt();
     convert = (recebi.substring(15,16));
     party   = convert.toInt();
     convert = (recebi.substring(16,17));
     rando   = convert.toInt();
     convert = (recebi.substring(17,18));
     rainbow = convert.toInt();
     convert = (recebi.substring(18,19));
     love    = convert.toInt();     
     convert = (recebi.substring(19,20));
     internet= convert.toInt();

      // variando as cores pouco a pouco em cada loop
    corra = (corra + variar[segundo]) / 2;
    corga = (corga + variag[segundo]) / 2;
    corba = (corba + variab[segundo]) / 2;

      //nos segundos pares acende o ":"
     if (segundo%2==0){
       LigaLed (40,corra/3,corga/3,corba/3);
     }

      //iguala cora e corb
     corrb = corra;
     corgb = corga;
     corbb = corba;

     AtuaLed();
   
 }

  }
else {
 // se rainbow estiver ligado, as cores variam entre si
     recebi  = Serial.readString();
     convert = (recebi.substring(9,10));
     hora1   = convert.toInt();
     convert = (recebi.substring(10,11));
     hora2   = convert.toInt();
     convert = (recebi.substring(11,12));
     minuto1 = convert.toInt();
     convert = (recebi.substring(12,13));
     minuto2 = convert.toInt();
     convert = (recebi.substring(13,15));
     segundo = convert.toInt();
     convert = (recebi.substring(15,16));
     party   = convert.toInt();
     convert = (recebi.substring(16,17));
     rando   = convert.toInt();
     convert = (recebi.substring(17,18));
     rainbow = convert.toInt();
     convert = (recebi.substring(18,19));
     love    = convert.toInt();     
     convert = (recebi.substring(19,20));
     internet= convert.toInt();



      // variando as cores pouco a pouco em cada loop
    corra = (corra + variar[acresec + sepbow * 0 ]) / 2;
    corga = (corga + variag[acresec + sepbow * 0 ]) / 2;
    corba = (corba + variab[acresec + sepbow * 0 ]) / 2;
    corrb = (corrb + variar[acresec + sepbow * 1 ]) / 2;
    corgb = (corgb + variag[acresec + sepbow * 1 ]) / 2;
    corbb = (corbb + variab[acresec + sepbow * 1 ]) / 2;
    corrc = (corrc + variar[acresec + sepbow * 2 ]) / 2;
    corgc = (corgc + variag[acresec + sepbow * 2 ]) / 2;
    corbc = (corbc + variab[acresec + sepbow * 2 ]) / 2;
    corrd = (corrd + variar[acresec + sepbow * 3 ]) / 2;
    corgd = (corgd + variag[acresec + sepbow * 3 ]) / 2;
    corbd = (corbd + variab[acresec + sepbow * 3 ]) / 2;
    corre = (corre + variar[acresec + sepbow * 4 ]) / 2;
    corge = (corge + variag[acresec + sepbow * 4 ]) / 2;
    corbe = (corbe + variab[acresec + sepbow * 4 ]) / 2;
    corrf = (corrf + variar[acresec + sepbow * 5 ]) / 2;
    corgf = (corgf + variag[acresec + sepbow * 5 ]) / 2;
    corbf = (corbf + variab[acresec + sepbow * 5 ]) / 2;
    corrg = (corrg + variar[acresec + sepbow * 6 ]) / 2;
    corgg = (corgg + variag[acresec + sepbow * 6 ]) / 2;
    corbg = (corbg + variab[acresec + sepbow * 6 ]) / 2;
    corrh = (corrh + variar[acresec + sepbow * 7 ]) / 2;
    corgh = (corgh + variag[acresec + sepbow * 7 ]) / 2;
    corbh = (corbh + variab[acresec + sepbow * 7 ]) / 2;
    corri = (corri + variar[acresec + sepbow * 8 ]) / 2;
    corgi = (corgi + variag[acresec + sepbow * 8 ]) / 2;
    corbi = (corbi + variab[acresec + sepbow * 8 ]) / 2;

                      LigaLed (posh1a[hora1],corra,corga,corba);
                      LigaLed (posh1b[hora1],corrb,corgb,corbb);
                      LigaLed (posh2a[hora2],corrc,corgc,corbc);
                      LigaLed (posh2b[hora2],corrd,corgd,corbd);

                         //acende o ":"
                      LigaLed (40,corre,corge,corbe);
                            
                      LigaLed (posm1a[minuto1],corrf,corgf,corbf);
                      LigaLed (posm1b[minuto1],corrg,corgg,corbg);
                      LigaLed (posm2a[minuto2],corrh,corgh,corbh);
                      LigaLed (posm2b[minuto2],corri,corgi,corbi);

    acresec = acresec + 1;
    if (acresec > 60) {
      acresec =0;
      }
 }
  }
     // se love estiver ligado, o coração pisca
  else{
    pixels.fill(); 
    pixels.show();

  recebi  = Serial.readString();
     convert = (recebi.substring(9,10));
     hora1   = convert.toInt();
     convert = (recebi.substring(10,11));
     hora2   = convert.toInt();
     convert = (recebi.substring(11,12));
     minuto1 = convert.toInt();
     convert = (recebi.substring(12,13));
     minuto2 = convert.toInt();
     convert = (recebi.substring(13,15));
     segundo = convert.toInt();
     convert = (recebi.substring(15,16));
     party   = convert.toInt();
     convert = (recebi.substring(16,17));
     rando   = convert.toInt();
     convert = (recebi.substring(17,18));
     rainbow = convert.toInt();
     convert = (recebi.substring(18,19));
     love    = convert.toInt();     
     convert = (recebi.substring(19,20));
     internet= convert.toInt();
     
      LigaLed (62,15,0,0);
      LigaLed (72,15,0,0);
      LigaLed (79,0,0,0);
      LigaLed (69,0,0,0);
      pixels.show();
      delay(15);
     
      LigaLed (62,30,0,0);
      LigaLed (72,30,0,0);
      pixels.show();
      delay(15);
      
      LigaLed (62,50,0,0);
      LigaLed (72,50,0,0);
      pixels.show();
      delay(15);
      
      LigaLed (62,70,0,0);
      LigaLed (72,70,0,0);
      pixels.show();
      delay(15);
      
      LigaLed (62,85,0,0);
      LigaLed (72,85,0,0);
      pixels.show();
      delay(30);   
  
      LigaLed (62,100,0,0);
      LigaLed (72,100,0,0);
      pixels.show();
      delay(70);
      
      LigaLed (62,60,0,0);
      LigaLed (72,60,0,0);
      LigaLed (79,30,0,0);
      LigaLed (69,30,0,0);
      pixels.show();
      delay(30);
            
      LigaLed (62,30,0,0);
      LigaLed (72,30,0,0);
      LigaLed (79,60,0,0);
      LigaLed (69,60,0,0);
      pixels.show();
      delay(30);
      
      LigaLed (62,0,0,0);
      LigaLed (72,0,0,0);
      LigaLed (79,100,0,0);
      LigaLed (69,100,0,0);
      pixels.show();
      delay(30);
  }
   contador=0;

 }
  // se não tiver sinal do ESP01 por 20 ciclos, pisca o No Signal
 else{        

  recebi  = Serial.readString();
     convert = (recebi.substring(9,10));
     hora1   = convert.toInt();
     convert = (recebi.substring(10,11));
     hora2   = convert.toInt();
     convert = (recebi.substring(11,12));
     minuto1 = convert.toInt();
     convert = (recebi.substring(12,13));
     minuto2 = convert.toInt();
     convert = (recebi.substring(13,15));
     segundo = convert.toInt();
     convert = (recebi.substring(15,16));
     party   = convert.toInt();
     convert = (recebi.substring(16,17));
     rando   = convert.toInt();
     convert = (recebi.substring(17,18));
     rainbow = convert.toInt();
     convert = (recebi.substring(18,19));
     love    = convert.toInt();     
     convert = (recebi.substring(19,20));
     internet= convert.toInt();
        
 //  contador = contador+1;
//    if(contador>20){
      LigaLed (61,50,5,0);
      LigaLed (71,50,5,0);
      pixels.show();
      delay(1000);
      LigaLed (61,0,0,0);
      LigaLed (71,0,0,0);
      pixels.show();
      delay(200);
  //  }
 //   else{
 //   pixels.fill(); 
 //   }
 }
 pixels.show();
}
