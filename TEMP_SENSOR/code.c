
float temp;
int tempPin = 0;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	temp = analogRead(tempPin);
	temp = temp * 0.48828125;
	Serial.println("TEMPERATURE = ");
	Serial.println(temp);
	Serial.println("*C");
	Serial.println();
	delay(1000);
}
