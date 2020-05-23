# labview-arduino
Exercícios fazendo conexão com o programa LabVIEW e o Arduino.


## Versão: <br>
LabVIEW 2018 e Arduino 1.8.9

## Simulação: <br>
Possui um arquivo ".jpg" feito no programa Fritzing mostrando como o circuito foi montado. 

## Como usar: <br>
Carregue o programa ".ino" no Arduino, abre o arquivo ".vi" e clique em "Run".  


## Como funciona cada programa: <br>

ler_dados -> Utilizando um código em C++ para carregar o programa no Arduino, o monitor serial mostra contagem de 1 em 1, começando do zero. No programa LabView, ele mostra a mesma contagem no "read buffer". Lembre-se de selecionar a porta no "VISA resource name" após conectar o Arduino no computador. Se quiser parar a contagem, clique em "STOP" no programa LabVIEW. <br> <br>

escrever_ler_dados -> No programa LabView, lembre-se de selecionar a porta no "VISA resource name" após conectar o Arduino no computador. Ao escrever a entrada no espaço "String" e clicar em "Enviar", o "read buffer" mostrará apenas texto quando a palavra "labview" for digitada, mostrando o seguinte texto: LabView Comunicado com o Arduino! <br>
Clique em "STOP" caso queira finalizar o programa. <br> <br>


contagem_gauge -> Conta de 1 em 1 no Gauge. No programa LabView, lembre-se de selecionar a porta no "VISA resource name" após conectar o Arduino no computador. Clique em "STOP" caso queira finalizar o programa. <br> <br> 

acender_led -> No programa LabView, lembre-se de selecionar a porta no "VISA resource name" após conectar o Arduino no computador. Ao pressionar o botão "Acender", o led irá acender. Se despressionar o botão, o led apaga. Componentes usados: Led Difuso 5mm Vermelho e 1 Resistor 330 ohm.  <br> <br>

acender_boolean_push_button -> No programa LabView, lembre-se de selecionar a porta no "VISA resource name" após conectar o Arduino no computador. Ao executar o programa no LabView, aperte o push button e o "Boolean" do LabView irá acender. Clique em "STOP" caso queira finalizar o programa. Componentes usados: 2 Resistores 330 ohm, Led Difuso 5mm Vermelho e Push Button (Chave Táctil) 6x6x6mm. <br> <br>

potenciometro_gauge -> No programa LabView, lembre-se de selecionar a porta no "VISA resource name" após conectar o Arduino no computador. Ao girar o Potenciômetro, o Gauge do LabView gira junto de 0 a 1023. Clique em "STOP" caso queira finalizar o programa. Componentes usados: 2 Resistores 330 ohm, Led Difuso 5mm Vermelho e Push Button (Chave Táctil) 6x6x6mm. <br> <br>

acender_led_push_button_potenciometro -> No programa LabView, lembre-se de selecionar a porta no "VISA resource name" após conectar o Arduino no computador. Ao apertar "Boolean 2", o "Meter" mostrará o valor lido pelo Potenciômetro entre 0 a 1023. Ao apertar "OK Button", o led acenderá. Ao apertar o Push Button do circuito, o "Boolean" acenderá. Componentes usados: 2 Resistores 330 ohm, Led Difuso 5mm Vermelho e Push Button (Chave Táctil) 6x6x6mm.  <br> <br>

pwm_analog_digital -> Abra o arquivo "pwm_analog_dig.vi". Ao executar este programa, lembre-se de selecionar a porta no "VISA resource name" após conectar o Arduino no computador. Dessa forma, Mude o valor do "Slide" para ter uma intensidade diferente no Led ligado ao Pino 5, aparecerá em "concatenated string" o valor da intensidade do Led. Além disso, Gire o Potenciômetro para ver o valor lido no "Gauge" de 0 a 1023. Também aperte "Boolean" para acender ou apagar o Led. Ademais, ao apertar o Push Button, o  "x=y?" ("Round Led") acenderá. Componentes usados: 2 Resistores 330 ohm, Led Difuso 5mm Vermelho e Push Button (Chave Táctil) 6x6x6mm. Segue abaixo uma tabela relacionando cada componente: <br>
Enviar Código | Recebe | Descrição
------------ | ------------- | -------------
ANA1: | AA 0-1023 | Pino A0
DIGA: | DA1/DA0 | Pino 4
PWM1 0-255| Intensidade do Led | Pino 5
DIGC1/0: | Led Aceso ou Apagado | Pino 13

<br> <br>
