void setup() {
  // put your setup code here, to run once:
  randomSeed(analogRead(A0));
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(11, random(256));
  analogWrite(10, random(256));
  analogWrite(9, random(256));
  delay(1000);
}
