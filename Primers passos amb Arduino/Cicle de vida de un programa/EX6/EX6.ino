
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(6, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(6, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(6, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);     
  digitalWrite(6, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a second
  digitalWrite(6, LOW);   // turn the LED off by making the voltage LOW
  delay(500);
  digitalWrite(6, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(6, LOW);   // turn the LED off by making the voltage LOW
  delay(100);                 // wait for a second
}
