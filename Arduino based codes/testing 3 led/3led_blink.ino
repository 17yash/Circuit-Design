int d2 = 2;
int d4 = 4;
int d7 = 7;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(d2, OUTPUT);
pinMode(d4, OUTPUT);
pinMode(d7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(d2, HIGH);   // turn the LED on (HIGH is the voltage level)
 digitalWrite(d4, HIGH); 
 digitalWrite(d7, HIGH); 
  delay(1000);                       // wait for a second
  digitalWrite(d2, LOW);    // turn the LED off by making the voltage LOW
digitalWrite(d4, LOW);
digitalWrite(d7, LOW);
  delay(1000);                       // wait for a second
}