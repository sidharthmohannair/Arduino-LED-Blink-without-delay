void customDelay(unsigned long duration) {
  unsigned long start = millis();
  while (millis() - start < duration) {
    // Do nothing, just wait
  }
}

void setup() {
  DDRB = B00100000; // Set pin 13 as output
}

void loop() {
  // Turn on the LED
  PORTB |= B00100000; // Set pin 13 high
  customDelay(1000);  // Wait for 2 seconds

  // Turn off the LED
  PORTB &= ~B00100000; // Set pin 13 low
  customDelay(500);   // Wait for 1 second
}
