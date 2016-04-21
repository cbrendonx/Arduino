#define LED_PIN1 13
#define UNIT 100
#define SYMBOL_SPACE UNIT
#define LETTER_SPACE 3 * UNIT
#define WORD_SPACE 7 * UNIT
#define DIT UNIT
#define DAH 3 * UNIT

void setup() {
  pinMode( LED_PIN1, OUTPUT );
}

void loop() {
  sos();
  //morse_code();
  delay( 5000 );
}

void sos() {
  morseS();
  delay( LETTER_SPACE );
  morseO();
  delay( LETTER_SPACE );
  morseS();
}

void morse_code() {
  morseM();
  delay( LETTER_SPACE );
  morseO();
  delay( LETTER_SPACE );
  morseR();
  delay( LETTER_SPACE );
  morseS();
  delay( LETTER_SPACE );
  morseE();
  delay( WORD_SPACE );
  morseC();
  delay( LETTER_SPACE );
  morseO();
  delay( LETTER_SPACE );
  morseD();
  delay( LETTER_SPACE );
  morseE();
}

void flash( int duration ) {
  digitalWrite( LED_PIN1, HIGH );
  delay( duration );
  digitalWrite( LED_PIN1, LOW );
}

void morseC() {
  flash( DAH );
  delay( SYMBOL_SPACE );
  flash( DIT );
  delay( SYMBOL_SPACE );
  flash( DAH );
  delay( SYMBOL_SPACE );
  flash( DIT );
}

void morseD() {
  flash( DAH );
  delay( SYMBOL_SPACE );
  flash( DIT );
  delay( SYMBOL_SPACE );
  flash( DIT );
}

void morseE() {
  flash( DIT );
}

void morseM() {
  flash( DAH );
  delay( SYMBOL_SPACE );
  flash( DAH);
}

void morseO() {
  flash( DAH );
  delay( SYMBOL_SPACE );
  flash( DAH );
  delay( SYMBOL_SPACE );
  flash( DAH );
}

void morseR() {
  flash( DIT );
  delay( SYMBOL_SPACE );
  flash( DAH );
  delay( SYMBOL_SPACE );
  flash( DIT );
}

void morseS() {
  flash( DIT );
  delay( SYMBOL_SPACE );
  flash( DIT );
  delay( SYMBOL_SPACE );
  flash( DIT );
}
