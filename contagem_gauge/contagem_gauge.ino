//contar de 1 em 1 e mostrar no gauge


int i = 0; 



void setup()
{
  Serial.begin (9600);

}

void loop() 
{
  i++;
  Serial.print (i);
  delay(100);
  
}
