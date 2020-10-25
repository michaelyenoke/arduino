/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 2;
int buttonState = 0; // 假設代數buttonState為按鈕狀態,先令為0
int beforeState = 0; // 假設之前的狀態;用來判斷是有按到沒按或反之

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
  //Serial.print("Hi~~~"); //傳訊息給電腦 --- 去掉 ln  
  //Serial.println("Hi~~~");  // 加上ln --- 代表會換行
  //Serial.println(buttonState); //讓序列埠輸出狀況
  // 改成條件--在只有有按按鈕的情況下才會print
  if(buttonState == 1 and beforeState == 0){  //beforeState == 0 會讓按下去那一瞬間才有反應
     Serial.println("Hi~~~");  
     Serial.println(buttonState); 
  }
  beforeState=buttonState;  // buttonState跑完的狀態(== 0,放開按鈕)作為beforeState的狀態(== 0);之後再進入下一個loop
  //delay(1);        // delay in between reads for stability
                     // 每次讀取訊息只間隔一毫秒
  delay(1);
  
}