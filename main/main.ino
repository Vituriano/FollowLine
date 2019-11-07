#include <DMPH.h>
#include <Ultrasonic.h>

#define echoPin 10 //Pino 10 recebe o pulso do echo
#define trigPin 8  //Pino 9 envia o pulso para gerar o echo

#define inPin 2 //pino de entrada no sensor

#define pot_vcc 51
#define pot_gnd 53
#define PINO_DEBUG 49

#define DIFF_K 820

int branco = 1;
int preto = 0;
int valor;

//Definicoes pinos Arduino ligados a entrada da Ponte H
DMPH motorE(6, 7, 9);
DMPH motorD(5, 4, 3);

//iniciando a função e passando os pinos
Ultrasonic ultrasonic(trigPin, echoPin);

const int E_K=255;
const int D_K=255;

// Recebe um valor e retorna o diferencial da esquerda e direita
void diferencial(int analog, int* esquerda, int* direita){
  *direita=255,*esquerda=255;
  if(analog>500){
    *direita-=(analog-500)/2;
  }

  if(analog<500){
    *esquerda-=(analog)/2;
  }
}

void setup()
{
  Serial.begin(9600);
  pinMode(echoPin, INPUT);  // define o pino 10 como entrada (recebe)
  pinMode(trigPin, OUTPUT); // define o pino 9 como saida (envia)
  pinMode(inPin, INPUT);    //colocando a porta 2 como entrada
  pinMode(pot_vcc,OUTPUT);
  pinMode(pot_gnd,OUTPUT);
  pinMode(PINO_DEBUG,OUTPUT);

  digitalWrite(pot_vcc,HIGH);
  digitalWrite(pot_gnd,LOW);
}

void loop() {
    int d, e;
    diferencial(DIFF_K, &d, &e);
    //Serial.println(analogRead(A8));
    frente(d,e);    
    valor = digitalRead(inPin); //realizando a leitura no sensor optico
    Serial.println(valor);
    if(dis() > 30) {
        //seguirLinha();
        debug_seguirLinha(e,d);
    } else {
        //debug_desviar(e,d);
        desviar(d,e);
    }
}
