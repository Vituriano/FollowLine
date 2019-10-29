void guia()
{
   int valor = digitalRead(inPin); //realizando a leitura no sensor optico
   if (valor == branco)
   {
      Serial.println("Branco"); //caso o valor seja alto - cor branca
   }
   else
   {
      Serial.println("Preto"); //caso o valor lido seja baixo - cor preta
   }
}
