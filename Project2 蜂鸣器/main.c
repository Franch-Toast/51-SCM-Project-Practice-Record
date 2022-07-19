
#include <reg52.h>
sbit Buzzer=P2^5;	
//注意，I/O口在单片机上电后的初始状态为高电平
typedef unsigned int u16;
void delay(u16 Time)
{
  while(Time--);
}

main()
{
u16 i=2000;
while(i--)
{
Buzzer=!Buzzer;
//电平反转
delay(100);
}
Buzzer=0;
while(1);
}   

