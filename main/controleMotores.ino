/*
 Essas funcoes recebem como entrada a constante de correcao de cara motor
*/

void frente(int e, int d)
{
  motorD.ligar(d);
  motorE.ligar(e);
}
void tras(int e, int d)
{
  motorD.ligar(-d);
  motorE.ligar(-e);
}
void parar()
{
  //motorD.ligar(-100);
  //motorE.ligar(-100);

  motorD.desligar();
  motorE.desligar();

  delay(50);
}
void viraEsquerda(int e, int d)
{
  motorD.ligar(-d);
  motorE.ligar(e);
}
void viraDireita(int e, int d)
{
  motorD.ligar(d);
  motorE.ligar(-e);
}
