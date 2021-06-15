int inPin = A2;
int val = 0;

void setup() {
pinMode(13, OUTPUT);
}

void loop() {
    val = analogRead(inPin);
    if (val <= 60)
    {
  digitalWrite(13, LOW);
  delay(6000);
    }
        if (val > 60 && val <= 120)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(10000);
    }
           if (val > 120 && val <= 180)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(8000);
    }
           if (val > 180 && val <= 240)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(6571);
    }
           if (val > 240 && val <= 300)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(5500);
    }
           if (val > 300 && val <= 360)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(4666);
    }
           if (val > 360 && val <= 420)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(4000);
    }
           if (val > 420 && val <= 480)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(3454);
    }
           if (val > 480 && val <= 540)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(3000);
    }
           if (val > 540 && val <= 600)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(2615);
    }
           if (val > 600 && val <= 660)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(2285);
    }
           if (val > 660 && val <= 720)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(2000);
    }
           if (val > 720 && val <= 780)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1750);
    }
           if (val > 780 && val <= 840)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1529);
    }
           if (val > 840 && val <= 901)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1333);
    }
           if (val > 901 && val <= 962)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1157);
    }
           if (val > 962 && val <= 1023)
    {
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite(13, LOW);
  delay(1000);
    }
    }
