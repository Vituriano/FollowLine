# Seguidor_deLinha
  O projeto foi desenvolvido a partir dos [requisitos propostos](Descrição.pdf) e do escopo solicitado. Dessa forma, foi produzido um robô móvel autônomo, usando a plataforma de prototipagem Arduino. Como visto na Figura 1.

![robo](https://user-images.githubusercontent.com/23245711/69837645-2cece000-1226-11ea-9994-4b394c5f3fc9.jpeg)

<p align="center">
Figura 1 - O Robô
</p>
<p align="justify">
  Desse modo, a função do robô é guiar-se por um caminho específico, desviando dos obstáculos em sua frente. Para isso, a movimentação é feita a partir de dois motores usando como guia uma linha branca, identificada por meio de sensores óticos. Além disso, ele se desloca para longe do obstáculo a partir da análise de sinais provenientes do sensor de ondas ultrassônicas.
  </p>
  <p align="justify">
  Para isso, o sistema implementado a fim de permitir o movimento do robô foi modularizado em funções para as diferentes necessidades. Além disso, ele constantemente muda o seu estado de atuação.
Nesse sentido, a fim de ter um feedback com relação ao estado no qual se encontra, foi implementada uma solução de hardware que informa o processo atual por meio de dados luminosos, através de LED’s conectados nas portas 18, 19 e 20 do Arduino (LED vermelho aceso quando está andando inclinado para a direita, LED verde aceso quando está andando inclinado para a esquerda, e LED amarelo aceso durante o processo de desviar de um obstáculo). Como visto na Figura 1.
  </p>
    <p align="justify">
  Outrossim, durante o processo de testes viu-se a necessidade de regular o centro de massa do dispositivo, como também a altura com que o sensor ótico está posicionado. Portanto, a fim de solucionar as problemáticas, inseriu-se um peso na parte da frente do robô, assim como adicionaram-se suportes que deixaram o sensor mais distante do chão.
</p>
