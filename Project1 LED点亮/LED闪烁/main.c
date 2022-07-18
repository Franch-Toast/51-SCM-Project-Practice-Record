	
#include <reg52.h>
typedef unsigned int u16;
typedef unsigned char u8; //也可不进行定义
sbit LED1=P2^0;

void delay(u16 Time)
{
 while(Time--);
}
//此处是一个不太精确的延时函数，精确函数应该通过定时器实现
main()
{
  while(1)
  {
  LED1=0;
  delay(50000);
  LED1=1;
  delay(50000);
   }
}	

