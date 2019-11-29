#include <DMPH.h> // biblioteca para controlar os motores
#include <Ultrasonic.h>

#define echoPin 10 //Pino 10 recebe o pulso do echo
#define trigPin 8  //Pino 9 envia o pulso para gerar o echo

#define inPin 2 //pino de entrada no sensor

#define ledE 20
#define ledD 19
#define ledM 18

//#define NOVENTA_GRAUS 250
#define NOVENTA_GRAUS 350

//#define FRENTE_TIME 1000
#define FRENTE_TIME 1000

int branco = 1;
int preto = 0;

int last_dist = 100000;
int last_time = 0;

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
  pinMode(ledE, OUTPUT);    // Led que indica o movimento
  pinMode(ledD, OUTPUT); // Led que indica o movimento
  pinMode(ledM, OUTPUT); // Led que indica a ação de desviar
  parar();
  delay(1000);
}
void loop()
{
  int valor = digitalRead(inPin); //realizando a leitura no sensor optico
  if (dis() > 5)
  {
    seguirLinha(valor);
    digitalWrite(ledM, LOW);
  }
  else
  {
    digitalWrite(ledM, HIGH);
    desviar(80 + 80, 50 + 40);
  }
}

void seguirLinha(int valor)
{
  if (valor == branco)
  {
    frente(80 + 100, 50 - 35);
    //Liga o LED
    digitalWrite(ledE, HIGH);
    digitalWrite(ledD, LOW);
  }
  else
  {
    frente(80 - 30, 50 + 20);
    //Liga o LED
    digitalWrite(ledD, HIGH);
    digitalWrite(ledE, LOW);
  }
}

void desviar(int e, int d)
{
  parar();
  delay(FRENTE_TIME);
  viraDireita(e, d);
  delay(NOVENTA_GRAUS);
  frente(e, d);
  delay(FRENTE_TIME);
  viraEsquerda(e, d);
  delay(NOVENTA_GRAUS);
  frente(e, d);
  delay(FRENTE_TIME);
  viraEsquerda(e, d);
  delay(NOVENTA_GRAUS);
  frente(e, d);
  delay((int)(FRENTE_TIME * (float)(0.7)));
}

int dis()
{
  /*
      Se o tempo atual menos o tempo da ultima medida for menor do que 100ms
      não iremos medir a distancia, mas sim, retornar a ultima distancia medida.
   */
  if ((millis() - last_time) < 100)
  {
    return last_dist;
  }

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
  last_time = millis();
  return last_dist = distancia;
}
