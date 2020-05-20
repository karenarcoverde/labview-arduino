//acender boolean com push button

int buttonPin = 4;

 
void setup() 
{
  Serial.begin (9600);
  pinMode (buttonPin, INPUT);
}

void loop() 
{
  if (digitalRead (buttonPin) == HIGH)
  {
    Serial.print("1");
  }

  else
  {
    Serial.print("0");
  }
  
  delay(900);
 
}
