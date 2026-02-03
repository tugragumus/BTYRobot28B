int anahtar=0;
void setup()
{
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(8,INPUT);
}

void loop()
{
  anahtar=digitalRead(8);
  if (anahtar==1)
  {
    int sayac=0;
    while(sayac<4)
    {
    digitalWrite(2,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(7,HIGH);
    tone(3,200);
    tone(5,200);
    tone(6,200);
    delay(250);
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);
    digitalWrite(7,LOW);
    tone(3,800);
    tone(5,800);
    tone(6,800);
    delay(250);
    noTone(3);
    noTone(5);
    noTone(6);
      sayac = sayac + 1;
    }
  }
  else
  {
    digitalWrite(2,LOW);
    digitalWrite(4,LOW);
    digitalWrite(7,LOW);
    noTone(3);
    noTone(5);
    noTone(6);
    delay(10);
  }
}