// C++ code
//
int ledGreen = 3;
int ledYellow = 4;
int ledOrange = 5;
int ledBlue = 6;
void setup()
{
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  
}

void loop()
{
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledOrange, LOW);
  digitalWrite(ledBlue, LOW);
  delay(10000); // Wait for 1000 millisecond(s)
  
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledOrange, LOW);
  digitalWrite(ledBlue, LOW);
  delay(5000);
  
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledOrange, HIGH);
  digitalWrite(ledBlue, LOW);
  delay(9000);
  
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledOrange, LOW);
  digitalWrite(ledBlue, HIGH);
  delay(7000);
    
}