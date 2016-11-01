int pressed_down = 0;
int state = 0;

void setup() {
  Serial.begin( 9600 );
  pinMode( A0, INPUT_PULLUP );
  pinMode( 4, OUTPUT );
  digitalWrite( 4, LOW );
}

void loop() {
  if ( !digitalRead( A0 ) ) {
    pressed_down = 1;
  }
  
  else {
    if ( pressed_down ) {
      state = !state;
    }
    
    pressed_down = 0;
  }

  if ( state ) {
    digitalWrite( 4, HIGH );
  }
  else {
    digitalWrite( 4, LOW );
  }
}
