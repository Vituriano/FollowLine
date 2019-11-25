void seguirLinha(int valor)
{
   if (valor == !branco)
   {
      frente(80 + 100, 50 - 35);
      digitalWrite(ledE, 255);
   }
   else
   {
      frente(80 - 30, 50 + 40);
      digitalWrite(ledD, 255);
   }
}

// if (valor == !branco)
// {
//    frente(80 + 100, 50 - 35);
// }
// else
// {
//    frente(80 - 30, 50 + 40);
// }