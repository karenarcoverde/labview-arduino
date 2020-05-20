//escrever e ler dados

char caractere;
String texto;





void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  while (Serial.available() > 0)
  {
    caractere = Serial.read ();
   
    if (caractere == ':')
    {
      break;    
    }
    else 
      texto.concat(caractere);
  } 
  
  if (texto == "labview")
  {
      Serial.print ("LabView Comunicado com o Arduino!");
      
  }
    
  texto = "";
  delay(1000); 
}
