int dis()
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
   return distancia;
}
