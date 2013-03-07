char INBYTE;
int  LED = 13; // LED on pin 13

void setup() {
  Serial.begin(9600); 
  pinMode(LED, OUTPUT);
}

void loop() {

  Serial.println("bla bla bla");
  while (!Serial.available());   // stay here so long as COM port is empty   
  
  INBYTE = Serial.read();        // read next available byte

  if( INBYTE == '0' ) digitalWrite(LED, LOW);  // if it's a 0 (zero) tun LED off

  if( INBYTE == '1' ) digitalWrite(LED, HIGH); // if it's a 1 (one) turn LED on

  delay(50);
}
