#include <DMPH.h>
#include <Ultrasonic.h>


#define echoPin 10 //Pino 10 recebe o pulso do echo
#define trigPin 8  //Pino 9 envia o pulso para gerar o echo

#define inPin 2 //pino de entrada no sensor

int branco;
int preto;

//Definicoes pinos Arduino ligados a entrada da Ponte H
DMPH motorE(6, 7, 9);
DMPH motorD(5, 4, 3);

//iniciando a função e passando os pinos
Ultrasonic ultrasonic(trigPin, echoPin);

void setup()
{
  Serial.begin(9600);
  pinMode(echoPin, INPUT);  // define o pino 10 como entrada (recebe)
  pinMode(trigPin, OUTPUT); // define o pino 9 como saida (envia)
  pinMode(inPin, INPUT);    //colocando a porta 2 como entrada
}
void loop()
{
  Serial.println(dis()); 
}
