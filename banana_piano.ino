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

  Serial.println(analogRead(rePin)); // Caso queira ler algum valor no monitor serial para saber qual é o valor de tolerância

  // Mude o valor de tolerância. Para definir qual valor é o melhor, veja o valor da variável no monitor serial para ver em quais valores ele fica acima quando você está encostando
  
  if(analogRead(doPin) > 20){ // Se o pino analógico do Dó for maior que o valor de tolerância
    tone(buzzer,262,200); // Tocar a nota dó no buzzer
   }
  if(analogRead(rePin) > 2){
    tone(buzzer,294,300);
   }
   if(analogRead(miPin) > 20){
    tone(buzzer,330,300);
   }
  if(analogRead(faPin) > 2){
    tone(buzzer,394,300);
   }
  if(analogRead(solPin) > 2){
    tone(buzzer,392,200);
   }
   
}
