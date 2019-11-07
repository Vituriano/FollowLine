#define NOVENTA 250
#define FRENTE_TIME 1000

void debug_desviar(int e, int d) {
    digitalWrite(PINO_DEBUG, HIGH);
    parar();
    delay(500);
    digitalWrite(PINO_DEBUG, LOW);
}

void desviar(int e, int d){
  parar();
  delay(FRENTE_TIME);
  viraDireita(e, d);
  delay(NOVENTA);
  frente(e, d);
  delay(FRENTE_TIME);
  viraEsquerda(e, d);
  delay(NOVENTA);
  frente(e, d);
  delay(FRENTE_TIME*2);
  viraEsquerda(e, d);
  delay(NOVENTA);
  frente(e,d);
  delay(FRENTE_TIME);
}
