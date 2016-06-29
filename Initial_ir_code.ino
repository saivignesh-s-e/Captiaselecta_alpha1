const int leftLDR = A1;  
void setup()
{
Serial.begin(9600);
}
void loop()
{
int leftValue = analogRead(leftLDR);
Serial.print("Left Sensor Value: ");
Serial.println(leftValue);
Serial.print("\n");
delay(1000);
}
