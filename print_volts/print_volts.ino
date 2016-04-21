#define LED_PIN1 3
#define LED_PIN2 5

const int sampleWindow = 50;  // Sample window width in mS (50 mS = 20Hz)
unsigned int sample;
double lightVal;
int micPin = A0;              //Select an analog input pin 
unsigned long iteration = 0;
 
void setup() {
  Serial.begin( 9600 );
  pinMode( LED_PIN1, OUTPUT );
  pinMode( LED_PIN2, OUTPUT );
}
 
 
void loop() {
  unsigned long startMillis = millis(); // Start of sample window
  unsigned int peakToPeak = 0;          // peak-to-peak level

  unsigned int signalMax = 0;
  unsigned int signalMin = 1024;

  // collect data for 50 mS
  while ( millis() - startMillis < sampleWindow ) {
    sample = analogRead( micPin );

    // toss out spurious readings
    if ( sample < 1024 ) {
      if ( sample > signalMax ) {

        // save just the max levels
        signalMax = sample; 
      }

      else if ( sample < signalMin ) {

        // save just the min levels
        signalMin = sample; 
      }
    }
  }

  // max - min = peak-peak amplitude
  peakToPeak = signalMax - signalMin;       

  // convert to volts
  double volts = ( peakToPeak * 5.0 ) / 1024; 

  // convert to values for analogWrite
  lightVal = volts / 5 * 255;
  
  analogWrite( LED_PIN1, lightVal );

  Serial.println( lightVal );
  
  // flash every 5 iterations (250 mS)
  if ( !( iteration % 5 ) )
  {
    analogWrite( LED_PIN2, 127 );
  }
  
  else {
    analogWrite( LED_PIN2, 0 );
  }

  iteration = ( iteration + 1 ) % 20;
}
