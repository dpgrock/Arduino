int RGB1 =12; //Define digital interface 
int RGB2 =11; //Define digital interface 
int RGB3 =10; //Define digital interface 
int RGB4 =9; //Define digital interface 
int RGB5 =8; //Define digital interface 
int RGB6 =7; //Define digital interface 
int RGB7 =6; //Define digital interface 
int RGB8 =5; //Define digital interface 
int RGB9 =4; //Define digital interface 
int RGB10 =3; //Define digital interface 
// Pin definition 
int key1 =A3; //Define digital A3 interface 
int key2 =A2; //Define digital A3 interface 
int key3 =A1; //Define digital A3 interface 
int key4 =A0; //Define digital A3 interface 

void setup()
{
    //Enable serial port function, set the corresponding parameters 
  Serial.begin(9600);
  
  pinMode(RGB1, OUTPUT);//Fixed Q1 interface for output interface 
  pinMode(RGB2, OUTPUT); //Fixed Q2 interface for output interface 
  pinMode(RGB3, OUTPUT); //Fixed Q3 interface for output interface 
  pinMode(RGB4, OUTPUT);//Fixed Q4 interface for output interface 
  pinMode(RGB5, OUTPUT); //Fixed Q5 interface for output interface 
  pinMode(RGB6, OUTPUT); //Fixed Q6 interface for output interface 
  pinMode(RGB7, OUTPUT);//Fixed Q7 interface for output interface 
  pinMode(RGB8, OUTPUT); //Fixed Q8 interface for output interface 
  pinMode(RGB9, OUTPUT); //Fixed Q9 interface for output interface 
  pinMode(RGB10, OUTPUT); //Fixed Q10 interface for output interface 
  
  pinMode(key1, INPUT_PULLUP);
  pinMode(key2, INPUT_PULLUP);
  pinMode(key3, INPUT_PULLUP);
  pinMode(key4, INPUT_PULLUP);
  
}
void loop()
{
   //Read key state values 
  int key1Value = analogRead(key1);
  int key2Value = analogRead(key2);
  int key3Value = analogRead(key3);
  int key4Value = analogRead(key4);
  if (key1Value <= 100)  
  {
     delay(30);
     if (key1Value <= 100) 
     {
       digitalWrite(RGB5,HIGH);//Light 
       digitalWrite(RGB6, HIGH);//Light 
       delay(50);
       digitalWrite(RGB4, HIGH);//Light 
       digitalWrite(RGB7,HIGH);//Light 
       delay(50);
       digitalWrite(RGB3, HIGH);//Light 
       digitalWrite(RGB8, HIGH);//Light 
       delay(50);
       digitalWrite(RGB2,HIGH);//Light 
       digitalWrite(RGB9, HIGH);//Light 
       delay(50);
       digitalWrite(RGB1, HIGH);//Light 
       digitalWrite(RGB10, HIGH);//Light 
       delay(1000);
     }
     else
     {
        // Output the final result of the led to the corresponding pin 
        digitalWrite(RGB1, LOW); //Go out 
        digitalWrite(RGB2, LOW);//Go out 
        digitalWrite(RGB3, LOW);//Go out 
        digitalWrite(RGB4, LOW); //Go out 
        digitalWrite(RGB5, LOW);//Go out 
        digitalWrite(RGB6, LOW);//Go out 
        digitalWrite(RGB7, LOW); //Go out 
        digitalWrite(RGB8, LOW);//Go out 
        digitalWrite(RGB9, LOW);//Go out 
        digitalWrite(RGB10, LOW);//Go out 
      }
  }  
 
  if (key2Value <= 100)  
  {
    digitalWrite(RGB1,HIGH);//Light 
    digitalWrite(RGB6, HIGH);//Light 
    delay(40);
    digitalWrite(RGB2, HIGH);//Light 
    digitalWrite(RGB7,HIGH);//Light 
    delay(40);
    digitalWrite(RGB3, HIGH);//Light 
    digitalWrite(RGB8, HIGH);//Light 
    delay(40);
    digitalWrite(RGB4,HIGH);//Light 
    digitalWrite(RGB9, HIGH);//Light 
    delay(40);
    digitalWrite(RGB5, HIGH);//Light 
    digitalWrite(RGB10, HIGH);//Light 
    delay(1000);
  }  
  else
  {
  // Output the final result of the led to the corresponding pin 
    digitalWrite(RGB1, LOW); //Go out 
    digitalWrite(RGB2, LOW);//Go out 
    digitalWrite(RGB3, LOW);//Go out 
    digitalWrite(RGB4, LOW); //Go out 
    digitalWrite(RGB5, LOW);//Go out 
    digitalWrite(RGB6, LOW);//Go out 
    digitalWrite(RGB7, LOW); //Go out 
    digitalWrite(RGB8, LOW);//Go out 
    digitalWrite(RGB9, LOW);//Go out 
    digitalWrite(RGB10, LOW);//Go out 
  }
  if (key3Value <= 100)  
  {
    digitalWrite(RGB1,HIGH);//Light 
    delay(90);
    digitalWrite(RGB1, LOW); //Go out 
    digitalWrite(RGB2, HIGH);//Light 
    delay(90);
    digitalWrite(RGB2, LOW);//Go out 
    digitalWrite(RGB3, HIGH);//Light 
    delay(90);
    digitalWrite(RGB3, LOW);//Go out 
    digitalWrite(RGB4, HIGH);//Light 
    delay(90);
    digitalWrite(RGB4, LOW); //Go out 
    digitalWrite(RGB5,HIGH);//Light 
    delay(90);
    digitalWrite(RGB5, LOW);//Go out 
    digitalWrite(RGB6,HIGH);//Light
    delay(90);
    digitalWrite(RGB6, LOW);//Go out 
    digitalWrite(RGB7,HIGH);//Light
    delay(90);
    digitalWrite(RGB7, LOW);//Go out 
    digitalWrite(RGB8,HIGH);//Light
    delay(90);
    digitalWrite(RGB8, LOW);//Go out 
    digitalWrite(RGB9,HIGH);//Light
    delay(90);
    digitalWrite(RGB9, LOW);//Go out 
    digitalWrite(RGB10,HIGH);//Light
    delay(1000);
  }  
  else
  {
  //Output the final result of the led to the corresponding pin 
    digitalWrite(RGB1, LOW); //Go out 
    digitalWrite(RGB2, LOW);//Go out 
    digitalWrite(RGB3, LOW);//Go out 
    digitalWrite(RGB4, LOW); //Go out 
    digitalWrite(RGB5, LOW);//Go out 
    digitalWrite(RGB6, LOW);//Go out 
    digitalWrite(RGB7, LOW); //Go out 
    digitalWrite(RGB8, LOW);//Go out 
    digitalWrite(RGB9, LOW);//Go out 
    digitalWrite(RGB10, LOW);//Go out 
  }
  if (key4Value <= 100)  
  {
    digitalWrite(RGB1,HIGH);//Light
    delay(50);
    digitalWrite(RGB1, LOW); //Go out 
    digitalWrite(RGB2, HIGH);//Light
    delay(50);
    digitalWrite(RGB2, LOW); //Go out 
    digitalWrite(RGB3, HIGH);//Light
    delay(50);
    digitalWrite(RGB3, LOW); //Go out 
    digitalWrite(RGB4,HIGH);//Light
    delay(50);
    digitalWrite(RGB4, LOW); //Go out 
    digitalWrite(RGB5, HIGH);//Light
    delay(50);
    digitalWrite(RGB5, LOW); //Go out 
    digitalWrite(RGB6, HIGH);//Light
    delay(50);
    digitalWrite(RGB6, LOW); //Go out 
    digitalWrite(RGB7,HIGH);//Light
    delay(50);
    digitalWrite(RGB7, LOW); //Go out 
    digitalWrite(RGB8, HIGH);//Light
    delay(50);
    digitalWrite(RGB8, LOW); //Go out 
    digitalWrite(RGB9, HIGH);//Light
    delay(50);
    digitalWrite(RGB9, LOW); //Go out 
    digitalWrite(RGB10,HIGH);//Light
    delay(50);
    digitalWrite(RGB10, LOW); //Go out 
    digitalWrite(RGB9, HIGH);//Light
    delay(50);
    digitalWrite(RGB9, LOW); //Go out 
    digitalWrite(RGB8, HIGH);//Light
    delay(50);
    digitalWrite(RGB8, LOW); //Go out 
    digitalWrite(RGB7,HIGH);//Light
    delay(50);
    digitalWrite(RGB7, LOW); //Go out 
    digitalWrite(RGB6, HIGH);//Light
    delay(50);
    digitalWrite(RGB6, LOW); //Go out 
    digitalWrite(RGB5, HIGH);//Light
    delay(50);
    digitalWrite(RGB5, LOW); //Go out 
    digitalWrite(RGB4,HIGH);//Light
    delay(50);
    digitalWrite(RGB4, LOW); //Go out 
    digitalWrite(RGB3, HIGH);//Light
    delay(50);
    digitalWrite(RGB3, LOW); //Go out 
    digitalWrite(RGB2, HIGH);//Light
    delay(50);
    digitalWrite(RGB2, LOW); //Go out 
    digitalWrite(RGB1, HIGH);//Light
    delay(50);
    digitalWrite(RGB1, LOW); //Go out 
    delay(1000);
  }  
  else
  {
  //Output the final result of the led to the corresponding pin 
    digitalWrite(RGB1, LOW); //Go out 
    digitalWrite(RGB2, LOW);//Go out 
    digitalWrite(RGB3, LOW);//Go out 
    digitalWrite(RGB4, LOW); //Go out 
    digitalWrite(RGB5, LOW);//Go out 
    digitalWrite(RGB6, LOW);//Go out 
    digitalWrite(RGB7, LOW); //Go out 
    digitalWrite(RGB8, LOW);//Go out 
    digitalWrite(RGB9, LOW);//Go out 
    digitalWrite(RGB10, LOW);//Go out 
  }
   
}

