/*
  Firmware to read the values of five bend sensors 
  connected to analog pins A0-A4, using internal pull-up resistors.
  
  More info on the Soft^Articulations project on:
  http://afroditipsarra.com/index.php?/on-going/softarticulations/
  http://acroe.imag.fr/proj/eastn/node/71
  http://eastn.eu
  
  May-June 2014
  
  by Afroditi Psarra
 */

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // declare pins A0-A4 as inputs and use the LilyPad's internal pull-up resistor 
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the inputs on the analog pins 0-4:
  int sensorA = analogRead(A0);
  int sensorB = analogRead(A1);
  int sensorC = analogRead(A2);
  int sensorD = analogRead(A3);
  int sensorE = analogRead(A4);
  
  // print out the values you read:
  Serial.print(sensorA);
  Serial.print(" ");
  Serial.print(sensorB);
  Serial.print(" ");
  Serial.print(sensorC);
  Serial.print(" ");
  Serial.print(sensorD);
  Serial.print(" ");
  Serial.println(sensorE);
  delay(1);        // delay in between reads for stability
}
