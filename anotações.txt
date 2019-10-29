Projeto de IC: 
componentes utilizados:

- Ponte-H - Driver 
	não tentar fazer freio? tipo para rampa... pois pode queimar o motor
	usar analogWrite para os motores?
- sensor ultrassônico
	tem que usar a biblioteca Ultrasonic.h passada pelo professor --> #include "Ultrasonic.h"
	tem o problema de não ser eficiente quanto ao cálculo do tempo --> deixa o carrinho travando/empacando
		para arrumar isso temos que nos virar, talvez só colocando a parte do cálculo em um lugar específico do código talvez já otimize para que o carrinho pare de travar

- sensor óptico --> só pode usar um, que é o dado pelo professor


passar pelo obstáculo não é obrigatório, mas se passar pelo obstáculo, ganha tempo (mas talvez seja melhor ter um carrinho mais rápido que termina o caminho rápido,mas sem passar pelo obstáculo (ou talvez seja bom passar pelo obstáculo?)

a pista pode ser preta com a linha branca ou branca com a linha preta --> fazer uma forma de poder mudar isso rapidamente no código, no dia da apresentação do projeto
por enquanto o padrão é lista branca com a linha preta.

não ir atrás dos códigos do pessoal dos semestres passados


100 linhas de código +/- é o suficiente para fazer um carrinho que ganhe a competição, segundo Jonny

O PROJETO PODE SER DIVIDIDO EM PEQUENOS EXPERIMENTOS:
PODE USAR OULTRAS BIBLIOTECAS EXCETO A DO ULTRASSOM (A DO ULTRASSOM TEM QUE SER A QUE O PROFESSOR DEU, MAS A GENTE PODE MODIFICAR ESSA BIBLIOTECADO ULTRASSOM QUE O PROFESSOR DEU)
 

- fazer o carrinho andar em linha reta
 - fazer o carrinho parar antes de obstáculos utilizando o sensor ultrassÔnico
 - fazer o carrinho desviar de obstáculos
 - fazer o carrinho seguir uma trilha preta com o auxílio do sensor óptico
 - reunir os experimentos anteriores para montar o projeto final

não pode levar o carrinho pra fora do cin
não pode colar fita no chão
é bom fazer uma pista para levar para o cin para testar e depois tem que trazer pra casa

ADICIONAIS: O ADICIONAL PRECISA SER HARDWERE
qualquer coisa, qualquer coisa mesmo a mais que tenha no carrinho
ex:
	- adicionar o lcd
	- LED como faróis
	- Buzzer
	- fazer carcaça de carrinho de papelão

vamos receber uma plaquinha específica com os pinos específicos que o professor disse

não pode usar outro sensor, ne moutra placa, etx

existe a possibilidade de usar mais de um sensor ultrassÔnico (usar um a mais) em um dos lados, para ajudar a evitar obstáculos (não é obrigatório)

PONTUAÇÃO:
experimentos - 30% = 3 pontos
presença e participação 30% = 3 pontos
projeto - 40% = 4 pontos
avaliação durante a competição
viu obstáculo e saiu da pista | passou do obstaculo| voltou para a pista (tudo sem bater no obstáculo)| toque    | adicional
		-10 segundos		0 segundos      -10 segundos                                      +5sec	    diz se vai ter penalização pela posição

cada posição abaixo, a sua nota cai, mas se tiver algum ADICIONAL no carrinho, não cai nada (mesmo na última posição, não perde nada)


depois o profesor vai olhar o código e se o código estiver (modularizado, identado, bem comentado, com tudo fácil de entender) será bem avaliado


NÃO PODE PISAR NA PISTA, PERDE MEIO PONTO SE PISAR (SÓ PODE PISAR DE MEIA)

NO SITE DA DISCIPLINA TEM A APRESENTAÇÃO DE HOJE, UM CÓDIGO QUE TESTA E EXEMPLIFICA O ULTRASSONICO, OUTRO QUE TESTA E EXEMPLIFICA A PONTE H E O OUTRO QUE TESTA E EXEMPLIFICA O SENSOR ÓPTICO (PRIMEIRA COISA A FAZER, PARA TESTAR SE O CARINHO TA FUNCIONANDO TUDO DIREITO E PARA COMEÇARMOS A ENTENDER COMO FAZER O PROJETO)

SÓ PODE USAR O KIT E O CARRINHO DENTRO DA SAL DE HARD LAB (SE PRCISAR USAR FORA, É SÓ FALAR COM O MONITOR E COMBINAR COM ELE) - os monitores são voluntários

a bateria fica com os monitores (comprar uma bateria????? pq tem que confiar no monitor??? mas é muito cara?????)!

o medidor vai mostrar a tensão de cada célula da bateria, o total é : nominal(11.1 volts, quase 13 se tiver bem carregada) cada célula vai mostrar entre 4.15 e 1.20

COLOCAR PARA CARREGAR SE ESTIVER ABAIXO DE 3.6 VOLTS??

PODE TROCA A FITA DUPLAFACE DA PROTOBOARD SE QUISER 

se algum sensor não pegar direito, temos que testar com um código de teste e, se tiver pegando, ou é erro do código ou é erro no carrinho; pode adicionar leds para iluminar mais o caminho para o sensor de linha, ou fazer um conezinho de papel para evitar a luz externa

NÃO PODE TIRAR A PLAQUINHA DO ARDUINO!!!!

o sensor opicional nã opode ser ligado na plaquinha, mas temos que dar um jeito de ligar-lo em outro lugar
