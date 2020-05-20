//acender led 

int ledPin = 7;
char estado;
 
 
void setup() 
{
  Serial.begin (9600);
  pinMode (ledPin, OUTPUT);
}

void loop() 
{
  if (Serial.available () > 0)
  {
    estado = Serial.read ();
  }
  
  

  if (estado == '1')
  {
    digitalWrite (ledPin, HIGH);
  }

   if (estado == '0')
  {
    digitalWrite (ledPin, LOW);
  }

  delay(200);  
}
