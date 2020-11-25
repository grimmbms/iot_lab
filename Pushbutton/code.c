const int buttonPin=2;
const int ledPin=13;
int buttonState=0;
void setup() 
{
  pinMode(ledPin,OUTPUT);  // declare LED as output
  pinMode(buttonPin, INPUT);    // declare pushbutton as input
}

void loop()
{
  buttonState = digitalRead(buttonPin);  // read input value
  if (buttonState== HIGH)
  {         
    digitalWrite(ledPin, HIGH); 
  } 
  else 
  {
    digitalWrite(ledPin, LOW);
  }
}
 
