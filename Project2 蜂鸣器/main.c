
#include <reg52.h>
sbit Buzzer=P2^5;	
//ע�⣬I/O���ڵ�Ƭ���ϵ��ĳ�ʼ״̬Ϊ�ߵ�ƽ
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
//��ƽ��ת
delay(100);
}
Buzzer=0;
while(1);
}   

