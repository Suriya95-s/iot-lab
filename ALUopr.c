#include<reg51.h>

void main(){
 unsigned char num1 = 0x12;
 unsigned char num2 = 0x0A;
 unsigned char result_add,result_sub,result_and,result_or;
 
 result_add = num1 + num2;
 result_sub = num1- num2;
 result_and = num1 & num2;
 result_or = num1| num2;
 
 P0 = 0x00;
 P1 = 0x00;
 P2 = 0x00;
 P3 = 0x00;
 
 P0 = result_add;
 P1 = result_sub;
 P2 = result_and;
 P3 = result_or;
}