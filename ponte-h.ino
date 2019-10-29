/**********************************************************
* UNIVERSIDADE FEDERAL DE PERNAMBUCO - UFPE
* CENTRO DE INFORMARICA - CIN
* INTRODUCAO A COMPUTAÇÃO COM GALILEO - IF668 EC
* CODIGO PARA TESTE DO SHIELD DRIVER PONTE-H
***********************************************************/
 
//Definicoes pinos Galileo ligados a entrada da Ponte H
int Motor_E1 = 6;
int Motor_E2 = 7;
int Motor_EV = 9;
int Motor_DV = 3;
int Motor_D2 = 4;
int Motor_D1 = 5;
  
void setup()
{
  //Define os pinos como saida
 pinMode(Motor_E1, OUTPUT);
 pinMode(Motor_E2, OUTPUT);
 pinMode(Motor_EV, OUTPUT);
 pinMode(Motor_DV, OUTPUT);
 pinMode(Motor_D2, OUTPUT);
 pinMode(Motor_D1, OUTPUT);
}
  
void loop()
{
 //Colocando o motor na velocidade máxima.
 digitalWrite(Motor_EV, HIGH);
 digitalWrite(Motor_DV, HIGH);
 
 
 //Gira o Motor E no sentido horario
 digitalWrite(Motor_E1, HIGH);
 digitalWrite(Motor_E2, LOW);
 delay(2000);
 //Para o motor E
 digitalWrite(Motor_E1, HIGH);
 digitalWrite(Motor_E2, HIGH);
 delay(500);
 //Gira o Motor D no sentido horario
 digitalWrite(Motor_D1, HIGH);
 digitalWrite(Motor_D2, LOW);
 delay(2000);
 //Para o motor D
 digitalWrite(Motor_D1, HIGH);
 digitalWrite(Motor_D2, HIGH);
 delay(500);
 
 //Gira o Motor E no sentido anti-horario
 digitalWrite(Motor_E1, LOW);
 digitalWrite(Motor_E2, HIGH);
 delay(2000);
 //Para o motor E
 digitalWrite(Motor_E1, HIGH);
 digitalWrite(Motor_E2, HIGH);
 delay(500);
 //Gira o Motor D no sentido anti-horario
 digitalWrite(Motor_D1, LOW);
 digitalWrite(Motor_D2, HIGH);
 delay(2000);
 //Para o motor D
 digitalWrite(Motor_D1, HIGH);
 digitalWrite(Motor_D2, HIGH);
 delay(500);
}
