#include<Arduino.h>
#define Red_Pin 9
#define Green_Pin 10
#define Blue_Pin 11
#define COLOR_CHANGE_DELAY 1000
void setup() {
  pinMode(Red_Pin,OUTPUT);
  pinMode(Blue_Pin,OUTPUT);
  pinMode(Green_Pin,OUTPUT);

}

void loop() {
  /*Red*/
  digitalWrite(Red_Pin,HIGH);
  digitalWrite(Green_Pin,LOW);
  digital_write(Blue_Pin,LOW);
  delay(COLOR_CHANGE_DELAY);

  /*Green*/
  digitalWrite(Red_Pin,LOW);
  digitalWrite(Green_Pin,HIGH);
  digitalWrite(Blue_Pin,LOW);
  delay(COLOR_CHANGE_DELAY);

  /*Blue*/
  digitalWrite(Red_Pin,LOW);
  digitalWrite(Green_Pin,LOW);
  digitalWrite(Blue_Pin,HIGH);
  delay(COLOR_CHANGE_DELAY);

  /*Turn on*/
  digitalWrite(Red_Pin,HIGH);
  digitalWrite(Green_Pin,HIGH);
  digitalWrite(Blue_Pin,HIGH);
  delay(COLOR_CHANGE_DELAY);

}
