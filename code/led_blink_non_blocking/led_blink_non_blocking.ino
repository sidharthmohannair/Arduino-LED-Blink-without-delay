
unsigned long previousMillis = 0;  // Stores the last time the LED was updated
const long interval = 1000;        // Interval at which to blink (milliseconds)

void setup() {
  DDRB = B00100000; // Set pin 13 as output
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // Save the last time you blinked the LED
    previousMillis = currentMillis;

    // If the LED is off, turn it on and vice-versa
    PORTB ^= B00100000; // Toggle pin 13
  }
}
