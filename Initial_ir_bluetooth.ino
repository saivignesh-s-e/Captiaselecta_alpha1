int LED= 12;  
char input;  
  
void setup() 
{  
  Serial.begin(9600);  
  pinMode(LED, OUTPUT);  
  Serial.println(">> START<<");  
}  
  
void loop() 
{  
  if(Serial.available()>0)  
  {  
    input= Serial.read();  
    if(input=='1')  
    {  
      Serial.println("ON");  
      digitalWrite(LED, HIGH);  
      delay(2000);  
    }  
    else if(input=='0')  
    {  
      Serial.println("OFF");  
      digitalWrite(LED, LOW);  
      delay(2000);  
    }  
      else if(input=='8')  
    {  
      FORWARD();
    }  
      else if(input=='2')  
    {  
    BACKWORD();
    }  
  
    else  
    {  
      Serial.println("NO INPUT");  
      Serial.println(input);  
    }  
  }  
    delay(5);
}


void FORWARD()
{
Serial.println("FORWARD");
}

void BACKWORD ()
{
Serial.println("BACKWORD");
}
