// the setup function runs once when you press reset or power the board
int D2 = 2;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(D2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(D2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(D2, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}