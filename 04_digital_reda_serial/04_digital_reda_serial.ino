/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 7;
int buttonState = 0; // 假設代數buttonState為按鈕狀態,先令為0

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  // Serial.begin; - 開始要跟電腦做連線
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  buttonState = digitalRead(pushButton); //從7號腳位偵測按鈕狀況(有按 or 沒有按),把結果給buttonState
  // print out the state of the button:
 Serial.println(buttonState); 
  Serial.println(buttonState); //讓序列埠輸出狀況
  delay(1);        // delay in between reads for stability
}