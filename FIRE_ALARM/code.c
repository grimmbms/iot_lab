const int temperaturePin = 0;
int buzzer = 12;

void setup()
{
  Serial.begin (9600);
  pinMode(buzzer, OUTPUT);
  pinMode(9,OUTPUT);
}
float getVoltage(int pin)
{
  return (analogRead(pin) * 0.004882814);
}
void loop()
{
  float voltage, degreesC;
  voltage = getVoltage(temperaturePin);//gets temp in 5v
  degreesC = (voltage-0.5)*100.0;//converts the temp to celcius
  digitalWrite(9,LOW);
  if(degreesC < 37)
  {
    Serial.print(degreesC);
  Serial.println(" IT IS SAFE!");
  }
  if(degreesC > 37)
  {
    Serial.print(degreesC);
    Serial.println(" ALERTTTTTT!");
    digitalWrite(buzzer, LOW);
    digitalWrite(9,HIGH);
    tone(12, 10000,100);
    delay(100);
  }
 
}
