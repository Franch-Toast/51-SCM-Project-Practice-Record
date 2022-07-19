/*
本代码与普中例程的区别在于
普中实现了静态的数组值单个赋予显示
本代码使用循环语句与粗略的延迟循环实现数组值逐一呈现 
*/ 

#include <reg52.h>

typedef unsigned char u8;
typedef unsigned int u16;
#define SMG_A_DP_PORT P0
//宏定义了P0这个I/O口，指定8位输出 

u8 sdtn[16]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
/*先行定义了16个显示数字（0~F）的P0的8位内容，并存入数组中需要显示时直接赋值P0 
值得注意的是，该开发板上使用的是8位共阴极的数码管， 如果位8位共阳极数码管，
该数组更改为{0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92,0x82, 0xF8, 0x80, 0x90, 0x88, 0x83,0xC6, 0xA1, 0x86, 0x8E} 
也可以按位取反值后赋值 
*/ 
void delay(u16 time)
{
 while(time--);
}

main()
{
	int i;
  for (i=0;i<16;i++)
  {
  SMG_A_DP_PORT=sdtn[i];
	  delay(30000);
	  }
	  while(1);
}

 
