#define LED_PIN1 3
#define LED_PIN2 5
#define BASE 2

void setup() {
  pinMode( LED_PIN1, OUTPUT );
  pinMode( LED_PIN2, OUTPUT );
}

void loop() {

  // iterate from 0 to 3
  for ( int index = 0; index < 4; index ++ ) {
    
    // 2 ^ 0 bit
    index % BASE ? digitalWrite( LED_PIN1, HIGH ) :
        digitalWrite( LED_PIN1, LOW );

    // 2 ^ 1 bit
    index / BASE ? digitalWrite( LED_PIN2, HIGH ) :
        digitalWrite( LED_PIN2, LOW );

    // display each number for 1 second
    delay( 1000 );
  }
}
