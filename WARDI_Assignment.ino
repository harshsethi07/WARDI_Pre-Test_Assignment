/*
  
  REFRENCES:
  https://www.arduino.cc/en/tutorial/potentiometer
  https://programmingelectronics.com/tutorial-20-analog-io-and-serial-communications-old-version/

  The Circuit Schematic was also taken from the above links.
*/


int potPin = 0;    // potentiometer input
int ledPin = 9;   
int val = 0;        

void setup() {
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  val = analogRead(potPin);   // read potentiometer input
  
  if ( val > 512 )    // 512 equals 2.5V since 1024 is equivalent to 5V
    digitalWrite(ledPin, HIGH);   // turn on the led
  else
    digitalWrite(ledPin, LOW);    // turn off the led    
}
