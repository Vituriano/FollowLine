/**
 * ========================================================================================== 
 * @ Software: DMPH_L298N  
 * @ Description: Consiste em ligar o motor no sentido horario, antiorario e desligar.
 * @ Version: 1.1.0 / Data: 14 de agosto de 2015
 * @ Developer Rodrigues F. A. S.
 * @ Site: rodriguesfas.github.io / E-mail: franciscosouzaacer@gmail.com 
 * ==========================================================================================
 * @ Histórico Version
 * 
 * @ 09 de agosto de 2015 Version 1.0.0 - Construção da lib.
 * 
 * @ 14 de agosto de 2015 Version 1.1.0 - Atualização da função ligar(), antes funcionava com 
 * o uso de dois, parâmetros um com a orientação da rotação do motor e outro como valor da 
 * velocidade. Consequentimente utilisando duas variaveis. Foi substituído para usar apenas uma 
 * variavel que já informa o valor da velocidade e a orientação da rotação da seguinte forma:
 * o valor informado já é a velocidade de rotação do motor propriamente dita, porem se o valor 
 * for positívo, a rotação é horária se o valor for negativo a rotação é antihorária. Assim 
 * obten-se uma sintáxi mais simples que a anterior e economia de memória. 
 * ==========================================================================================
 */

 /* importe da lib. */
 #include <DMPH.h>

/**
 * Instância dois objetos chamados motor1 e motor2, passando por parametros os pinos de conexão 
 * onde esta ligado cada um nas portas do Arduíno (motor, motor, Pino velocidade).
 */
 DMPH motor1(2, 4, 3);
 DMPH motor2(6, 7, 5);

 void setup(){}

 void loop() {
 	motor1.ligar(100); // valores positivos liga motor no sentido horário.
 	motor2.ligar(100);

 	delay(5000); // espera 5 segundos
 	
 	motor1.desligar();
 	motor2.desligar();
 	
 	delay(5000);

 	motor1.ligar(-100); // valores negativos liga motor no sentido antiorário.
 	motor2.ligar(-100);

 	delay(5000);
 	
 	motor1.desligar();
 	motor2.desligar();

 	delay(5000);
 }