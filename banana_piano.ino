/*
  
  Piano de Banana para o workshop do GRACE
  com meninas do 7° ano do ensino fundamental
  ao ensino médio

  Versão com buzzer
  
*/

// Definindo os pinos analógicos. Cada pino será uma nota -> será conectado com uma banana
int doPin = A0;  // 262,200
int rePin = A1;  // 294,300
int miPin = A2;  // 330,300
int faPin = A3;  // 349,300
int solPin = A4; // 392,200

int buzzer = 8;  // Pino digital no qual o buzzer está conectado

void setup() {
  Serial.begin(9600); // Comunicação serial para que a gente consiga ver os valores no serial plotter ou monitor serial
  pinMode(buzzer, OUTPUT); // Definindo buzzer como saída (OUTPUT)
}

void loop() {

  String texto = String(analogRead(doPin))+" "+String(analogRead(rePin))+" "+String(analogRead(miPin))+" "+String(analogRead(faPin))+" "+String(analogRead(solPin));
  Serial.println(texto); // Caso queira ler algum valor no monitor serial para saber qual é o valor de tolerância
  
  if(analogRead(doPin) > 130){ // Se o pino analógico do Dó for maior que o valor de tolerância
    tone(buzzer,262,200); // Tocar a nota dó no buzzer
   }
  
  else if(analogRead(rePin) > 130){
    tone(buzzer,294,300);
   }
  
  else if(analogRead(miPin) > 130){
    tone(buzzer,330,300);
   }
  
  else if(analogRead(faPin) > 130){
    tone(buzzer,349,300);
   }
  
  else if(analogRead(solPin) > 100){
    tone(buzzer,392,200);
   }
   delay(100);   
}
