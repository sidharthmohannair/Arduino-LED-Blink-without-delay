
void setup() {
  DDRB = B00100000; // Set pin 13 as output
}

void loop() {
  PORTB |= B00100000; // Set pin 13 high
  delay(1000);        // Wait for 1 second
  PORTB &= ~B00100000; // Set pin 13 low
  delay(1000);        // Wait for 1 second
}
