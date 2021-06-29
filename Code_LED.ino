// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(10); // Wait for 10 millisecond(s)
  digitalWrite(13, LOW);
  delay(10); // Wait for 10 millisecond(s)
}