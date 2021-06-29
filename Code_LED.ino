// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);          // set pin13 as output
}

void loop(){
  digitalWrite(13, HIGH);      // set the switch on
  delay(10);                   // Wait for 10 millisecond(s)
  digitalWrite(13, LOW);       // set the switch off
  delay(10);                   // Wait for 10 millisecond(s) 
}
