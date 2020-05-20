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
