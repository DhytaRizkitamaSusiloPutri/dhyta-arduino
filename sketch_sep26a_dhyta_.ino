void setup() {
  // initialize digital pin 11 as an output:
  pinMode (11, OUTPUT);
}

void loop() {
  digitalWrite (11, HIGH);    // turn the LED on (HIGH is the voltage level)
  delay(2000);                // wait faor a second
  digitalWrite(11, LOW);      // turn the LED off by making the voltage LOW
  delay(2000);                // wait for a second   
}
