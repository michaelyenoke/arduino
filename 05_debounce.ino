/*
計數器
*/


int pushButton = 2;
int buttonState = 0; 
int beforeState = 0;
int pressTime = 0; 

void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
}


void loop() {
  buttonState = digitalRead(pushButton); 
  if(buttonState == 1 and beforeState == 0){  
     pressTime = pressTime + 1;
     Serial.println(pressTime); 
  }
  if(buttonState!=beforeState ){
      delay(50)  // debounce -- 忽略這段時間內的所有判讀
  }
  beforeState=buttonState;  
  delay(1);
  
}