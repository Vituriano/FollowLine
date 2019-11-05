void frente(int motorDireita, int motorEsquerda)
{
  motorD.ligar(motorDireita);
  motorE.ligar(motorEsquerda);
}
void tras(int motorDireita, int motorEsquerda)
{
  motorD.ligar(-motorDireita);
  motorE.ligar(-motorEsquerda);
}
void parar()
{
  motorD.desligar();
  motorE.desligar();
}
void viraEsquerda(int motorDireita, int motorEsquerda)
{
  motorD.ligar(-motorDireita);
  motorE.ligar(motorEsquerda);
}
void viraDireita(int motorDireita, int motorEsquerda)
{
  motorD.ligar(motorDireita);
  motorE.ligar(-motorEsquerda);
}