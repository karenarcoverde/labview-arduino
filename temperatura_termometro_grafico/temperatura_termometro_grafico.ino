//mostrar temperatura no termômetro e no gráfico
String texto;
char c;
String codigo, valor;

void setup() 
{
  Serial.begin (115200);
  pinMode (6, OUTPUT);  
}

void loop() 
{
  while (Serial.available () > 0)
  {
    c = Serial.read ();
    if (c == ':')
    {
      break;
    }
    else
    {
      texto.concat(c);
    }
    delay(1);
  }

  codigo = texto.substring (0,4);
  valor = texto.substring (4);

  if (codigo == "TEMP")
  {
    Serial.print ((100*analogRead (A5)*5)/1024);
    digitalWrite (6, HIGH);
    delay(100);
    digitalWrite (6, LOW);
  }
  delay(10);
  texto = "";
  codigo = "";
  valor = "";

}
