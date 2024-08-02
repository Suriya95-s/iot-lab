#include<reg51.h>
void main(void)
{
unsigned char w,x,y,z;
x=0x12;
y=0x34;
P0 = 0x00;
z=x+y;
P0=z;

P1=0x00;
w=z*y;
P1=w;
}