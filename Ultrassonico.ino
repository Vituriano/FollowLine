/**********************************************************
* UNIVERSIDADE FEDERAL DE PERNAMBUCO - UFPE
* CENTRO DE INFORMARICA - CIN
* INTRODUCAO A PROGRAMACAO COM GALILEO - IF668 EC
* CODIGO PARA TESTE DO SHIELD SENSOR ULTRASSONICO
********************************************************/

#include "Ultrasonic.h"
#define echoPin 10 //Pino 10 recebe o pulso do echo
#define trigPin 8 //Pino 9 envia o pulso para gerar o echo

//iniciando a função e passando os pinos
Ultrasonic ultrasonic(trigPin,echoPin);

int parou = 0;
 
void setup()
{
   pinMode(echoPin, INPUT); // define o pino 10 como entrada (recebe)
   pinMode(trigPin, OUTPUT); // define o pino 9 como saida (envia)
   Serial.begin(9600);
}
 
void loop()
{
//seta o pino 9 com um pulso baixo "LOW" ou desligado ou ainda 0
digitalWrite(trigPin, LOW);
// delay de 2 microssegundos
delayMicroseconds(2);
//seta o pino 9 com pulso alto "HIGH" ou ligado ou ainda 1
digitalWrite(trigPin, HIGH);
//delay de 10 microssegundos
delayMicroseconds(10);
//seta o pino 9 com pulso baixo novamente
digitalWrite(trigPin, LOW);
// função Ranging, faz a conversão do tempo de
//resposta do echo em centimetros, e armazena
//na variavel distancia
int distancia = (ultrasonic.Ranging(CM));
Serial.print("Distancia em CM: ");
Serial.println(distancia);
delay(1000); //espera 1 segundo para fazer a leitura
}
