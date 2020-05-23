//acende led totalmente, acende led controlando a intensidade, aperta push button e mostra na tela o valor lido do push button e mostra na tela o valor lido do potenciômetro
/* ao digitar "ANA1:" -> retorna AA 0-1023
 * ao digitar "DIGA:" -> retorna DA1 (push button pressionado)/DA0 (push button não pressionado)
 * ao digitar "PWM1 0-255:" -> retorna a intensidade colocada no led
 * ao digitar "DIGC1/0:" -> retorna led aceso (1) ou apagado (0)
 */

String texto;
char caractere;
String codigo, valor;



void setup() 
{
  Serial.begin (115200);
  pinMode(13,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop()
{
  while (Serial.available () > 0)
  {
    caractere = Serial.read();

    if (caractere == ':')
    {
      break;
    }
    else
      texto.concat (caractere);
  }


  codigo = texto.substring (0,4);
  valor = texto.substring (4);


  if (codigo == "DIGC")
  {
      if (valor == "1")
      {
        digitalWrite (13, HIGH);
      }

      if (valor == "0")
      {
        digitalWrite (13, LOW);
      }
  }

  if (codigo == "ANA1")
  {
      Serial.print ("AA" + (String) analogRead (A0));    
  }

  if (codigo == "ANA2")
  {
    Serial.print ("AB" + (String) analogRead (A1));
  }
  
  if (codigo == "PWM1")
  {
    analogWrite (5, getInt (valor));
  }

  if (codigo == "DIGA")
  {
    Serial.print ("DA" + (String) digitalRead (4));
    
  }

  delay(10);

  texto = "";
  codigo = "";
  valor = "";
  
}


int getInt (String texto)
{
    int temp = texto.length() + 1;
    char buffer [temp];
    texto.toCharArray (buffer, temp);
    int num = atoi (buffer);
    return num;
}
