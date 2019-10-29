/**
 * ========================================================================================================================
 * @Software: DMPH_L298N  
 * @Description: Ajuda na implementação de tarefas usando o Driver Motor Ponte H L298N.
 * @Version: 1.0.2 / Data: 30 de agosto de 2015
 * @Developer Rodrigues F. A. S.
 * @Site: rodriguesfas.github.io / E-mail: franciscosouzaacer@gmail.com 
 * ========================================================================================================================
 * Historic Version
 *
 * @ 09 de agosto de 2015 - Versão 1.0.1 - Inicial.
 * @ 30 de agosto de 2015 - Versão 1.0.2 - Correção rotação antioraria.
 *
 *
 *
 * ========================================================================================================================
 */

#include "DMPH.h"

/**
 * O construtor DMPH::DMPH(int pin1, int pin2, int pinVel) configura os pinos passados como parâmetro como saída
 * e depois atribui os seus valores às variáveis privadas, de modo que elas possão ser utilizadas pelos métodos
 * das classes futuramente.
 */
 DMPH::DMPH(int pin1, int pin2, int pinVel){
 	// Configura pinos como saída.
 	pinMode(pin1, OUTPUT); 
 	pinMode(pin2, OUTPUT);
 	pinMode(pinVel, OUTPUT);

 	pino1 = pin1; // Motor pino 1
 	pino2 = pin2; // Motor pino 2
 	pinoVel = pinVel; // Motor pino velocidade
 }

/**
 * Método ligar - recebe a orientação de rotação do motor (horario ou antiorario) e a velocidade.
 */
 void DMPH::ligar(int vel){
 	if(vel > 0){ //rotação do motor sentido horário.
 		digitalWrite(pino1,HIGH);
 		digitalWrite(pino2,LOW);
 		analogWrite(pinoVel,vel);
 	} 
 	else if(vel < 0){ //rotação do motor sentido antihorário.
 		digitalWrite(pino1,LOW);
 		digitalWrite(pino2,HIGH);
 		analogWrite(pinoVel,vel*(-1));
 	}
 }

/**
 * Método deligar - deliga o motor.
 */
 void DMPH::desligar(){
 	digitalWrite(pino1, LOW);
 	digitalWrite(pino2, LOW);
 }
