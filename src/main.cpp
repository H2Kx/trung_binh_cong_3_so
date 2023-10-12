#include <Arduino.h>
float tinh_trung_binh_cong_3_so(float a, float b, float c){
float trung_binh_cong=(a+b+c)/3;
return trung_binh_cong;
}
float kq;
void setup(){
  Serial.begin(9600);
}
void loop(){
kq=tinh_trung_binh_cong_3_so(2,3,4);
Serial.println(kq);
delay(100);
}