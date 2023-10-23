#include <Servo.h>
#include <LiquidCrystal.h>


int rs=12, en=11, d4=5, d5=4, d6=3, d7= 2; 		//initializing the value of pins that are going to be used
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);			

int p, output;									//declaring the variables for the potentiometer and the servo motor rotation

Servo ser;										//creating a new variable for the servo 

void setup()
{
  lcd.setCursor(0, 0);							//setting the starting point for text in the lcd
  pinMode(7, INPUT);							//setting up the led to digital pin7
  pinMode(A0, INPUT);							//setting up the potentiometer wiper to the analog pin 0
  ser.attach(9);								//connecting the servo signal to digital pin 9
}

void loop()
{
  p = analogRead(A0);							//reading the value of the potentiometer
  output = map(p, 0, 1023, 0, 70);				//mapping the value of the potentiometer to the rotation of the servo
  
  ser.write(output);							//making the servo rotate according to the output value
  delay(10); 
  
  lcd.setCursor(0, 0);							
  lcd.print(output);							//printing the amount of rotation by the servo in degrees onto the lcd
  delay(10);
  
  if(output>68){								//conditioning the led to light up if the servo motor rotates more then a certain amount
  digitalWrite(7, HIGH);
  }
  if(output<=68){
  digitalWrite(7, LOW);
  }
  
}