int LED= 12;  
int pinLB=6;     // 
int pinLF=9;     // 

int pinRB=10;    // 
int pinRF=11;    // 

char input;  
  
void setup() 
{  
  Serial.begin(9600);  
  pinMode(LED, OUTPUT);  
  pinMode(pinLB,OUTPUT); // 
  pinMode(pinLF,OUTPUT); //
  pinMode(pinRB,OUTPUT); // 
  pinMode(pinRF,OUTPUT); //
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
      else if(input=='w')  
    {  
      FORWARD();
    }  
      else if(input=='s')  
    {  
    BACKWORD();
    }  
      else if(input=='a')  
    {  
    LEFT();
    }  
      else if(input=='d')  
    {  
    RIGHT();
    }    
        else if(input=='x')  
    {  
    STOP();
    }  
    else  
    {  
      Serial.println("NO INPUT");  
      Serial.println(input);  
    }  
  }  
    delay(50);
}


void FORWARD()
{
Serial.println("FORWARD");
     digitalWrite(pinRB,HIGH);  // 
     digitalWrite(pinRF,LOW);
     digitalWrite(pinLB,LOW);  //
     digitalWrite(pinLF,HIGH);
     delay(50);
}

void BACKWORD ()
{
Serial.println("BACKWORD");
     digitalWrite(pinRB,LOW);  //
     digitalWrite(pinRF,HIGH);
     digitalWrite(pinLB,HIGH);  //
     digitalWrite(pinLF,LOW);
delay(50);
}

void RIGHT()
{
  digitalWrite(pinRB,HIGH);  //
     digitalWrite(pinRF,LOW);
     digitalWrite(pinLB,HIGH);
     digitalWrite(pinLF,LOW);  //
     delay(50);
}


void LEFT()
{
  digitalWrite(pinRB,LOW);
     digitalWrite(pinRF,HIGH);   //
     digitalWrite(pinLB,LOW);   //
     digitalWrite(pinLF,HIGH);
    delay(50);
}

void STOP()
{
     digitalWrite(pinRB,LOW);  // 
     digitalWrite(pinRF,LOW);
     digitalWrite(pinLB,LOW);  //
     digitalWrite(pinLF,LOW);
}

