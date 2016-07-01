int leftLDR = 7;
int rightLDR = 8;
int centerLDR = 3;
int pinLB=6;     // 
int pinLF=9;     // 

int pinRB=10;    // 
int pinRF=11;    // 

void setup()
{
Serial.begin(9600);
pinMode(pinLB,OUTPUT); // 
pinMode(pinLF,OUTPUT); //
pinMode(pinRB,OUTPUT); // 
pinMode(pinRF,OUTPUT); //
}
void loop()
{
int leftValue = digitalRead(leftLDR);
int centerValue = digitalRead(centerLDR);
int rightValue = digitalRead(rightLDR);
Serial.print("Sensor Value: ");
Serial.println(leftValue);
Serial.println(centerValue);
Serial.println(rightValue);
Serial.print("\n");
delay(5);
if (leftValue == 1 && centerValue == 0 && rightValue == 1)
{
Serial.print("Forward");
FORWARD();
}
else if (leftValue == 0 && centerValue == 1 && rightValue == 1)
{
Serial.print("LEFT");
LEFT();
}
else if (leftValue == 1 && centerValue == 1 && rightValue == 0)
{
Serial.print("RIGHT");
RIGHT();
}
else if (leftValue == 0 && centerValue == 0 && rightValue == 0 ||leftValue == 1 && centerValue == 1 && rightValue == 1)
{
Serial.print("STOP");
STOP();
}

}


void FORWARD()
{
Serial.println("FORWARD");
     digitalWrite(pinRB,HIGH);  // 
     digitalWrite(pinRF,LOW);
     digitalWrite(pinLB,LOW);  //
     digitalWrite(pinLF,HIGH);
   delay(5);  
}

void BACKWORD ()
{
Serial.println("BACKWORD");
     digitalWrite(pinRB,LOW);  //
     digitalWrite(pinRF,HIGH);
     digitalWrite(pinLB,HIGH);  //
     digitalWrite(pinLF,LOW);
   delay(5);
}

void RIGHT()
{
  digitalWrite(pinRB,HIGH);  //
    digitalWrite(pinRF,LOW);
    digitalWrite(pinLB,HIGH);
    digitalWrite(pinLF,LOW);  //
  delay(5);
}


void LEFT()
{
  digitalWrite(pinRB,LOW);
    digitalWrite(pinRF,HIGH);   //
    digitalWrite(pinLB,LOW);   //
    digitalWrite(pinLF,HIGH);
  delay(5);
}

void STOP()
{
     digitalWrite(pinRB,LOW);  // 
     digitalWrite(pinRF,LOW);
     digitalWrite(pinLB,LOW);  //
     digitalWrite(pinLF,LOW);
}


