// C++ code
//
int ledGreen = 3;
int ledOrange = 4;
int ledRed = 5; 
void setup()
{
  pinMode(ledGreen, OUTPUT);
  pinMode(ledOrange, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop()
{
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledOrange, LOW);
  digitalWrite(ledRed, LOW);
  delay(10000); // Wait for 1000 millisecond(s)
  
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledOrange, HIGH);
  digitalWrite(ledRed, LOW);
  delay(5000);
  
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledOrange, LOW);
  digitalWrite(ledRed, HIGH);
  delay(9000);
  
}