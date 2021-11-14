void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int light = analogRead(A0);
  int hertz = map(light, 0, 1023, 31, 4978);

  tone(9, hertz, 100);
  delay(100);
  noTone(9);
  delay(200);
  
  
}
