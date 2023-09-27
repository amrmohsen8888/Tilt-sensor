int IN1 = 8;
 int IN2 = 9;
 int ENA = 10;
 int sen= 2;
 int on = HIGH;
 int off = LOW;
int read;

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(sen, INPUT);
  Serial.begin(9600);
}

void loop()
{
  read = digitalRead(sensor);
  Serial.println(read);
  if (read == 1)
  {
    digitalWrite(IN1, on);
    digitalWrite(IN2, off);
    digitalWrite(ENA, on);
    
  }
  else
  {
    digitalWrite(IN1, off);
    digitalWrite(IN2, off);
    digitalWrite(ENA, off);
  }
}