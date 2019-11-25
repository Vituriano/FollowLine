#define NOVENTA_GRAUS 250
#define FRENTE_TIME 1000

void desviar(int e, int d){
  parar();
  delay(FRENTE_TIME);
  viraDireita(e, d);
  delay(NOVENTA_GRAUS);
  frente(e, d);
  delay(FRENTE_TIME);
  viraEsquerda(e, d);
  delay(NOVENTA_GRAUS);
  frente(e, d);
  delay(FRENTE_TIME*2);
  viraEsquerda(e, d);
  delay(NOVENTA_GRAUS);
  frente(e,d);
  delay(FRENTE_TIME);
}
