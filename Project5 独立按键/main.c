#include <reg52.h>
typedef unsigned int u16; 
typedef unsigned char u8;
//定义独立按键控制脚
sbit KEY1=P3^1;
sbit KEY2=P3^0;
sbit KEY3=P3^2;
sbit KEY4=P3^3;
//定义 LED1 控制脚
sbit LED1=P2^0;
sbit LED2=P2^1;
sbit LED3=P2^2;
sbit LED4=P2^4;


void delay_10us(u16 ten_us)
{
while(ten_us--);
}
//更改LED状态的函数 
void changeLED(int key_now,int key_last)
{
	if(key_now==1)
	LED1=!LED1;
	if(key_now==2)
	LED2=!LED2;
	if(key_now==3)
	LED3=!LED3;
	if(key_now==4)
	LED4=!LED4;
	if(key_now==0)
	{
	switch(key_last)
	{
	case 1:LED1=!LED1;break;
	case 2:LED2=!LED2;break;
	case 3:LED3=!LED3;break;
	case 4:LED4=!LED4;break;
	}
	//如果目前状态为未按，则除同样未按外反转LED状态 
	}
}

int key_detect()
{
  if(KEY1==0||KEY2==0||KEY3==0||KEY4==0)//任意按键按下
{
if(KEY1==0)
return 1;
else if(KEY2==0)
return 2;
else if(KEY3==0)
return 3;
else if(KEY4==0)
return 4;

}
else if(KEY1==1&&KEY2==1&&KEY3==1&&KEY4==1) 
	return 0;
}

main()
{
	int key_last=0;
	int key_now;
	while(1)
	{
	key_now=key_detect();
	if(key_last!=key_now)
	{
	delay_10us(1000);
	key_now=key_detect();
	//再次检测查看是否为干扰 
	if(key_last==key_now);
	if(key_last!=key_now)
	{
	changeLED(key_now,key_last);
	}
	key_last=key_now; 
	}

	}
}
