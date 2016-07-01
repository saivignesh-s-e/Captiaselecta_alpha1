// Include files
#include <Servo.h> 
const int trigPin = 2;
const int echoPin = 4;

// Motor pins
int pinLB=6;     // 
int pinLF=9;     // 
int pinRB=10;    // 
int pinRF=11;    // 
// int speedpin1=1; //PWM pinLB
// int speedpin=3; //PWM pinRBB

// IR pins
int leftLDR = 7;
int rightLDR = 8;
int centerLDR = 3;

// Bluetooth input
char input;
int LED= 12; 

// Ultrasonic pins
int Fspeedd = 0;      // 
int R1_speedd = 0;      // 
int R2_speedd = 0;      // 
int R3_speedd = 0;      // 
int R4_speedd = 0;      // 
int R5_speedd = 0;      // 
int L1_speedd = 0;      // 
int L2_speedd = 0;      // 
int L3_speedd = 0;      // 
int L4_speedd = 0;      //
int L5_speedd = 0;      //
int directionn = 0;   //  
Servo myservo;        // 
int delay_time = 250; // 

int Fgo = 8;         // 
int Rgo = 6;         // 
int Lgo = 4;         // 
int Bgo = 2;         // 

// Optional pins
int inputPin = A0;  // 
int outputPin =A1;  // 

void setup()
{
Serial.begin(9600);
pinMode(pinLB,OUTPUT); 
pinMode(pinLF,OUTPUT); 
pinMode(pinRB,OUTPUT); 
pinMode(pinRF,OUTPUT); 
pinMode(LED, OUTPUT);  
myservo.attach(5); 
Serial.println("Choose Mode");
Serial.println("1 for Autonomous Mode");
Serial.println("2 for Manual Mode");
Serial.println("3 for Line Follower");
Serial.println("9 for LED OFF (TEST MODE)");
Serial.println("0 for LED ON (TEST MODE)");
Serial.println(">> START<<"); 
}

void loop()
{
 if(Serial.available()>0)  
  {  
    input= Serial.read();  
    if(input=='0')  
    {  
      Serial.println("ON");  
      digitalWrite(LED, HIGH);  
      delay(2000);  
    }  
    else if(input=='9')  
    {  
      Serial.println("OFF");  
      digitalWrite(LED, LOW);  
      delay(2000);  
    }
  else if(input == '1')
  {
    Serial.println("Autonomous Mode");
    myservo.write(106);  //
    detection();        //
      
   if(directionn == 2)  //             
   {
     back(8);                    //  
     turnL(2);                   //
     //Serial.print(" Reverse ");   //
   }
   if(directionn == 6)           //    
   {
     /*back(1); 
     turnR(6);     // */
     
     if (R1_speedd > R2_speedd+R3_speedd+R4_speedd+R5_speedd) 
     {
        back(1); 
        turnR(7);     // 
        //Serial.print(" Hard Right Turn");    //
     }
     else
     {
       if(R1_speedd+R2_speedd > R3_speedd+R4_speedd+R5_speedd)
         {
         back(1); 
         turnR(5);     // 
         //Serial.print(" Medium Right Turn ");    //
         } 
        else
         {
           if (R1_speedd+R2_speedd+R3_speedd > R4_speedd+R5_speedd)
             {
               back(1); 
               turnR(4);     // 
               //Serial.print(" Small Right Turn ");    //
             }
             else
             {
               back(1); 
               turnR(3);     // 
               //Serial.print(" Very small Right Turn ");    //
             }
         }
     }    
   }
   if(directionn == 4)          //    
   {  
     /*back(1);      
     turnL(6);                  // */
     
     if (L5_speedd > L4_speedd+L3_speedd+L2_speedd+L1_speedd) 
     {
       back(1);
        turnL(7);     // 
        //Serial.print(" Hard Left Turn");    //
     }
     else
     {
       if(L5_speedd+L4_speedd > L3_speedd+L2_speedd+L1_speedd)
         {
         back(1);
         turnL(5);     // 
         //Serial.print(" medium Left Turn ");    //
         } 
        else
         {
           if (L5_speedd+L4_speedd+L3_speedd > L2_speedd+L1_speedd)
             {
               back(1); 
               turnL(4);     // 
               //Serial.print(" Small Left Turn ");    //
             }
             else
             {
               back(1);
               turnL(3);     // 
               //Serial.print(" Very small Left Turn ");    //
             }
         }
     } 
     
   }  
   if(directionn == 8)          //      
   { 
    advance(1);                 //   
    //Serial.print(" Advance ");   //
    //Serial.print("   ");    
   }
 }
  
  else if(input == '3')
  {
    int leftValue = digitalRead(leftLDR);
    int centerValue = digitalRead(centerLDR);
    int rightValue = digitalRead(rightLDR);
    //Serial.print("Sensor Value: ");
    //Serial.println(leftValue);
    //Serial.println(centerValue);
    //Serial.println(rightValue);
    //Serial.print("\n");
    delay(5);
    if (leftValue == 1 && centerValue == 0 && rightValue == 1)
      {
        //Serial.print("Forward");
        FORWARD();
      }
    else if (leftValue == 0 && centerValue == 1 && rightValue == 1)
      {
        //Serial.print("LEFT");
        LEFT();
      }
    else if (leftValue == 1 && centerValue == 1 && rightValue == 0)
      {
        //Serial.print("RIGHT");
        RIGHT();
      }
    else if (leftValue == 0 && centerValue == 0 && rightValue == 0 ||leftValue == 1 && centerValue == 1 && rightValue == 1)
      {
        //Serial.print("STOP");
        STOP();
      }

  }
  
  else if(input == '2' || input == 'w' || input == 's' || input == 'a' || input == 'd' || input == 'x')
  {
    if(input=='w')  
    {  
      Serial.println("FORWARD");
      FORWARD();
    }  
    else if(input=='s')  
    {  
      Serial.println("BACKWORD");
      BACKWORD();
    }  
    else if(input=='a')  
    {  
      Serial.println("LEFT");
      LEFT();
    }  
    else if(input=='d')  
    {  
      Serial.println("RIGHT");
      RIGHT();
    }    
        else if(input=='x')  
    {  
      Serial.println("STOP");
      STOP();
    }   

  }

  else  
    {  
      Serial.println("NO INPUT");  
      Serial.println(input);  
    } 


}
}

// Functions
void FORWARD()
{
//Serial.println("FORWARD");
    digitalWrite(pinRB,HIGH);  // 
    digitalWrite(pinRF,LOW);
    digitalWrite(pinLB,LOW);  //
    digitalWrite(pinLF,HIGH);
  delay(5);  
}

void BACKWORD ()
{
//Serial.println("BACKWORD");
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


void advance(int a)     // 
    {
     /*analogWrite(speedpin,150);//define speed
     analogWrite(speedpin1,150);*/
     digitalWrite(pinRB,HIGH);  // 
     digitalWrite(pinRF,LOW);
     digitalWrite(pinLB,LOW);  //
     digitalWrite(pinLF,HIGH);
     delay(a * 100);     
    }

void right(int b)        //
    {
     /*analogWrite(speedpin,250);//define speed
     analogWrite(speedpin1,250);*/
     digitalWrite(pinRB,LOW);   //
     digitalWrite(pinRF,HIGH);
     digitalWrite(pinLB,HIGH);
     digitalWrite(pinLF,HIGH);
     delay(b * 50);
    }
void left(int c)         //
    {
     /*analogWrite(speedpin,250);//define speed
     analogWrite(speedpin1,250);*/
     digitalWrite(pinRB,HIGH);
     digitalWrite(pinRF,HIGH);
     digitalWrite(pinLB,LOW);   //
     digitalWrite(pinLF,HIGH);
     delay(c * 50);
    }
void turnR(int d)        //
    {
     /*analogWrite(speedpin,250);//define speed
     analogWrite(speedpin1,250);*/
     digitalWrite(pinRB,HIGH);  //
     digitalWrite(pinRF,LOW);
     digitalWrite(pinLB,HIGH);
     digitalWrite(pinLF,LOW);  //
     delay(d * 75);
     Serial.print(" TurnR ");
    }
void turnL(int e)        //
    {
     /*analogWrite(speedpin,250);//define speed
     analogWrite(speedpin1,250);*/
     digitalWrite(pinRB,LOW);
     digitalWrite(pinRF,HIGH);   //
     digitalWrite(pinLB,LOW);   //
     digitalWrite(pinLF,HIGH);
     delay(e * 75);
     Serial.print(" TurnL "); 
    }    
void stopp(int f)         //
    {
     digitalWrite(pinRB,LOW);
     digitalWrite(pinRF,LOW);
     digitalWrite(pinLB,LOW);
     digitalWrite(pinLF,LOW);
     delay(f * 100);
     Serial.print(" Halt "); 
    }
void back(int g)          //
    {
     /*analogWrite(speedpin,200);//define speed
     analogWrite(speedpin1,200);*/
     digitalWrite(pinRB,LOW);  //
     digitalWrite(pinRF,HIGH);
     digitalWrite(pinLB,HIGH);  //
     digitalWrite(pinLF,LOW);
     delay(g * 50);    
     Serial.print(" Back "); 
    }
    
long microsecondsToCentimeters(long microseconds)
  {
  
  return microseconds / 29 / 2;
  }
    
void detection()        //
    {      
      int delay_time = 250;   // 
      ask_pin_F();            // 
      
      if(Fspeedd <= 20 )         // 
         {
            stopp(1);               //  
            back(8);                // 
         }
       if(Fspeedd>100 && Fspeedd<260)
       {
            stopp(1);               //  
            back(1); 
            turnL(2); 
       }
      if(Fspeedd < 30)         // 
      {
        
        stopp(1);               //  
        ask_pin_R1();            // 
        ask_pin_R2();            // 
        ask_pin_R3();            // 
        ask_pin_R4();            //
        ask_pin_R5();            // 
        ask_pin_L1();            //     
        ask_pin_L2();            //    
        ask_pin_L3();            //   
        ask_pin_L4();            // 
        ask_pin_L5();            //   
        
        if(L1_speedd+L2_speedd+L3_speedd+L4_speedd+L5_speedd > R1_speedd+R2_speedd+R3_speedd+R4_speedd+R5_speedd)   //
        {
         directionn = Lgo;      //
        }
        
        if(L1_speedd+L2_speedd+L3_speedd+L4_speedd+L5_speedd <= R1_speedd+R2_speedd+R3_speedd+R4_speedd+R5_speedd)   //
        {
         directionn = Rgo;      //
        } 
        
        if (L1_speedd+L2_speedd+L3_speedd+L4_speedd+L5_speedd < 20 && R1_speedd+R2_speedd+R3_speedd+R4_speedd+R5_speedd < 20)   //
        {
         directionn = Bgo;      //        
        }          
 
      }
    else                      //   
      {
        directionn = Fgo;        //    
      }
     
    }    
void ask_pin_F()   //  
    {
      myservo.write(106);
      long duration, Fdistance;
      pinMode(trigPin, OUTPUT);
      digitalWrite(trigPin, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
      pinMode(echoPin, INPUT);
      duration = pulseIn(echoPin, HIGH);

      Fdistance = microsecondsToCentimeters(duration);
  
      Serial.print("Fdistance is : ");
      Serial.print(Fdistance);
      Serial.print("cm");
      Serial.println();
  
      Fspeedd = Fdistance;              // 
      
      delay(150);
      
        }     
    
    
void ask_pin_L1()   //
    {
      myservo.write(115);
      long duration, L1_distance;
      pinMode(trigPin, OUTPUT);
      digitalWrite(trigPin, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW); 
      pinMode(echoPin, INPUT);
      duration = pulseIn(echoPin, HIGH);
      L1_distance = microsecondsToCentimeters(duration);
      Serial.print("L1_distance is : ");
      Serial.print(L1_distance);
      Serial.print("cm");
      Serial.println();
      L1_speedd = L1_distance;         
      delay(150);
    }  
    
void ask_pin_L2()   //
    {
      myservo.write(130);
      long duration, L2_distance;
      pinMode(trigPin, OUTPUT);
      digitalWrite(trigPin, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
      pinMode(echoPin, INPUT);
      duration = pulseIn(echoPin, HIGH);
      L2_distance = microsecondsToCentimeters(duration); 
      Serial.print("L2_distance is : ");
      Serial.print(L2_distance);
      Serial.print("cm");
      Serial.println(); 
      L2_speedd = L2_distance;              //  
      delay(150);
    } 
    
    
void ask_pin_L3()   //
    {
      myservo.write(145);
      long duration, L3_distance;
      pinMode(trigPin, OUTPUT);
      digitalWrite(trigPin, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
      pinMode(echoPin, INPUT);
      duration = pulseIn(echoPin, HIGH);
      L3_distance = microsecondsToCentimeters(duration); 
      Serial.print("L3_distance is : ");
      Serial.print(L3_distance);
      Serial.print("cm");
      Serial.println();
      L3_speedd = L3_distance; 
      delay(150);
    } 

void ask_pin_L4()   //
    {
      myservo.write(160);
      long duration, L4_distance;
      pinMode(trigPin, OUTPUT);
      digitalWrite(trigPin, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
      pinMode(echoPin, INPUT);
      duration = pulseIn(echoPin, HIGH);
      L4_distance = microsecondsToCentimeters(duration);
      Serial.print("L4_distance is : ");
      Serial.print(L4_distance);
      Serial.print("cm");
      Serial.println();
      L4_speedd = L4_distance;              // 
      delay(150);
    }
    
void ask_pin_L5()   //
    {
      myservo.write(175);
      long duration, L5_distance;
      pinMode(trigPin, OUTPUT);
      digitalWrite(trigPin, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
      pinMode(echoPin, INPUT);
      duration = pulseIn(echoPin, HIGH);
      L5_distance = microsecondsToCentimeters(duration); 
      Serial.print("L5_distance is : ");
      Serial.print(L5_distance);
      Serial.print("cm");
      Serial.println();
      L5_speedd = L5_distance;              // 
      delay(150);
    }
    
    
void ask_pin_R1()   //  
    {
      myservo.write(5);
      long duration, R1_distance;
      pinMode(trigPin, OUTPUT);
      digitalWrite(trigPin, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
      pinMode(echoPin, INPUT);
      duration = pulseIn(echoPin, HIGH);
      R1_distance = microsecondsToCentimeters(duration); 
      Serial.print("R1_distance is : ");
      Serial.print(R1_distance);
      Serial.print("cm");
      Serial.println();
      R1_speedd = R1_distance;              //   
      delay(150);
  
    }   
    
    
void ask_pin_R2()   //  
    {
      myservo.write(20);
      long duration, R2_distance;
      pinMode(trigPin, OUTPUT);
      digitalWrite(trigPin, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
      pinMode(echoPin, INPUT);
      duration = pulseIn(echoPin, HIGH);
      R2_distance = microsecondsToCentimeters(duration); 
      Serial.print("R2_distance is : ");
      Serial.print(R2_distance);
      Serial.print("cm");
      Serial.println();
      R2_speedd = R2_distance;              //    
      delay(150);
    }  
       
void ask_pin_R3()   //  
    {
      myservo.write(35);
      long duration, R3_distance;
      pinMode(trigPin, OUTPUT);
      digitalWrite(trigPin, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
      pinMode(echoPin, INPUT);
      duration = pulseIn(echoPin, HIGH);
      R3_distance = microsecondsToCentimeters(duration);
      Serial.print("R3_distance is : ");
      Serial.print(R3_distance);
      Serial.print("cm");
      Serial.println();
      R3_speedd = R3_distance;              //    
      delay(150);
  
    }
    
void ask_pin_R4()   //  
    {
      myservo.write(50);
      long duration, R4_distance;
      pinMode(trigPin, OUTPUT);
      digitalWrite(trigPin, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
      pinMode(echoPin, INPUT);
      duration = pulseIn(echoPin, HIGH);
      R4_distance = microsecondsToCentimeters(duration);
      Serial.print("R4_distance is : ");
      Serial.print(R4_distance);
      Serial.print("cm");
      Serial.println();
      R4_speedd = R4_distance;              //   
      delay(150);
    } 
    
void ask_pin_R5()   //  
    {
      myservo.write(65);
      long duration, R5_distance;
      pinMode(trigPin, OUTPUT);
      digitalWrite(trigPin, LOW);
      delayMicroseconds(2);
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
      pinMode(echoPin, INPUT);
      duration = pulseIn(echoPin, HIGH);
      R5_distance = microsecondsToCentimeters(duration);  
      Serial.print("R5_distance is : ");
      Serial.print(R5_distance);
      Serial.print("cm");
      Serial.println();
      R5_speedd = R5_distance;              //   
      delay(150);     
    }



