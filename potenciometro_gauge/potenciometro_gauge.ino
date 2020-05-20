//leitura potenciometro com labview utilizando o gauge

int pot;


void setup() 
{
  Serial.begin (9600);
}

void loop() 
{
  pot = analogRead(A5);
  Serial.print (pot);
  delay(500);
}
