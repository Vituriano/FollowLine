void seguirLinha()
{
   if (valor == branco)
   {
      frente(100, 50);
      delay(50);
   }
   else
   {
      while (valor == preto)
      {
         frente(50, 100);
         delay(50);
      }
   }
}
