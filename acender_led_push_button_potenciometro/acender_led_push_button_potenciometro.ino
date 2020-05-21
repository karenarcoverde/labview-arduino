//acender led, mostrar valor do push button e valor lido pelo potenciometro


String texto;
char caractere;
String led;

void setup()
{
  Serial.begin (9600);
  pinMode(4,INPUT); //BOTAO
  pinMode(7,OUTPUT); //LED
}

void loop()
{
  while (Serial.available () > 0)
  {
    caractere = Serial.read ();
    if (caractere == ':')
    {
      break;
    }
    else 
      texto.concat(caractere);
  }
  

  if (texto == "bt")
  {
    if (digitalRead(4) == HIGH)
    {
      Serial.print ("1");
    }
    else 
      Serial.print ("0");
  }

  if (texto == "pt")
  {
    Serial.print (analogRead(A5));
  }

  if (texto == "1" || led == "1")
  {
    led = "1";
    digitalWrite(7,HIGH);
  }

  if (texto == "0" || led == "0")
  {
    led = "0";
    digitalWrite (7,LOW);
  }


  texto = "";
  delay(10);
  
}
