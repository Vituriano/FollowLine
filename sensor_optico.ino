/**********************************************************
* UNIVERSIDADE FEDERAL DE PERNAMBUCO - UFPE
* CENTRO DE INFORMARICA - CIN
* INTRODUCAO A PROGRAMACAO COM GALILEO - IF668 EC
* CODIGO PARA TESTE DO SENSOR OPTICO
********************************************************/

int inPin = 2; //pino de entrada no sensor
int valor = 0; //Inteiro que armazena o valor lido
 
void setup()
{
   Serial.begin(9600); //inicializando a porta serial
   pinMode(inPin, INPUT); //colocando a porta 2 como entrada
}
 
void loop()
{
    valor = digitalRead(inPin);//realizando a leitura no sensor optico
    if (valor == HIGH)
    {
       Serial.println("Branco"); //caso o valor seja alto - cor branca
    } 
	  else
    {
       Serial.println("Preto"); //caso o valor lido seja baixo - cor preta
    }
}
