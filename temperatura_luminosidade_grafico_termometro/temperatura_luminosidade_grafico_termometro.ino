/*
 * lê a temperatura e a luminosidade e mostra em um gráfico
 * se o valor da luminosidade for menor que 200, aciona o relé e o led (pino 8) acende 
 * cada vez que a temperatura for lida, o led (pino 6) acende
 */
String texto;
char caractere;

String codigo, valor;


void setup() 
{
  Serial.begin (115200);
  pinMode(6, OUTPUT); //PINO LED para o LM35
  pinMode (8, OUTPUT); //IN1 do relé - LED DO RELÉ para o LDR 
}

void loop() 
{
  while(Serial.available() > 0)
  {
    caractere = Serial.read();
    if(caractere == ':')
    {
      break;
    }else{
      texto.concat(caractere);
    }
    delay(1);
  }
  
  codigo = texto.substring(0,4);
  valor = texto.substring(4);
  
  if(codigo == "TEMP")
  {
    Serial.print((100*analogRead(A5)*5)/1024);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(6, LOW);
  }
  
  if(codigo == "LDRA")
  {
    Serial.print("LD" + (String)analogRead(A0));
  }
  
  
  if(codigo == "RELE")
  {
    if(valor == "0")
    {
      digitalWrite(8, HIGH);
    }
    if(valor == "1")
    {
      digitalWrite(8, LOW);
    }
  }
  
  delay(10);
  texto = "";
  codigo = "";
  valor = "";
}
