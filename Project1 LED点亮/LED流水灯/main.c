	
#include <reg52.h>
typedef unsigned int u16;
typedef unsigned char u8; //也可不进行定义

void delay(u16 Time)
{
 while(Time--);
}
//此处是一个不太精确的延时函数，精确函数应该通过定时器实现
main()
{
	u8 i;
  while(1)
  {
	for(i=0;i<=7;i++)
	{
		P2=~(0x01<<i);
		//将2进制数中的所有均 1 左移 i 位，然后取反将8位结果赋予P2
		delay(50000);
	}
   }
}	
/* 也可以使用keil头文件库#include "intrins.h"中的
左移函数 _crol_(2进制数,移动位数)
右移函数 _cror_(2进制数,移动位数)
该移位功能就相当于一个队列内循环移动
*/