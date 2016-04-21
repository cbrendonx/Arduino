#define LED_PIN1 3
#define LED_PIN2 5
#define MAX_VALUE 255

void setup() {
  pinMode( LED_PIN1, OUTPUT );
  pinMode( LED_PIN2, OUTPUT );
}

void loop() {
  
  // fade in from min to max in increments of 5 points:
  for ( int fadeValue = 0; fadeValue <= MAX_VALUE; fadeValue += 5 ) {
    
    // sets the value (range from 0 to MAX_VALUE):
    analogWrite( LED_PIN1, fadeValue ); //fill in the pin number
    analogWrite( LED_PIN2, MAX_VALUE - fadeValue );
    delay( 30 );
  }

  // fade out from max to min in increments of 5 points:
  for ( int fadeValue = MAX_VALUE; fadeValue >= 0; fadeValue -= 5 ) {
    
    // sets the value (range from 0 to MAX_VALUE):
    analogWrite( LED_PIN1, fadeValue ); //fill in the pin number
    analogWrite( LED_PIN2, MAX_VALUE - fadeValue );
    delay( 30 );
  }
}
