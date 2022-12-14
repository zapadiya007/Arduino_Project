// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);   // turn the LED connected to 8th pin ON (HIGH is the voltage level)
  delay(1000);            // wait for a second( Values are given in milli seconds)
  digitalWrite(8, LOW);    // turn the LED connected to 8th pin OFF by making the voltage LOW
  delay(1000);            // wait for a second
}