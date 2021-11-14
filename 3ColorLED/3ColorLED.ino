int r = 0;
int g = 0;
int b = 0;

void setup() {
  pinMode(4, INPUT);
  pinMode(3, INPUT);
  pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(4) == HIGH) {
    ++r;
    if (r > 255) {
      r = 0;
    }
  }
  if (digitalRead(2) == HIGH) {
    ++b;
    if (b > 255) {
      b = 0;
    }
    
  }
  if (digitalRead(3) == HIGH) {
    ++g;
    if (g > 255) {
      g = 0;
    }
  }
  analogWrite(11, r);
  analogWrite(10, g);
  analogWrite(9, b);

  delay(10);

}
