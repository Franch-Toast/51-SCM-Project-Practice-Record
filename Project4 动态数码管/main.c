#include <reg52.h>

typedef unsigned char u8;
typedef unsigned int u16;
#define Number P0
//宏定义了P0这个I/O口，指定8位输出 

sbit LIA=P2^2;
sbit LIB=P2^3;
sbit LIC=P2^4;

u8 sdtn[16]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};

void delay(u16 time)
{
 while(time--);
}

main()
{	
	int i=0;
	while(1)
{
  for (i=0;i<8;i++)
  {
  switch(i)
  {
	case 0:	LIA=1;LIB=1;LIC=1;break;
	case 1:	LIA=0;LIB=1;LIC=1;break;
	case 2: LIA=1;LIB=0;LIC=1;break;
	case 3:	LIA=0;LIB=0;LIC=1;break;
	case 4:	LIA=1;LIB=1;LIC=0;break;
	case 5:	LIA=0;LIB=1;LIC=0;break;
	case 6: LIA=1;LIB=0;LIC=0;break;
	case 7:	LIA=0;LIB=0;LIC=0;break;
  }
  	Number=sdtn[i];	
	delay(200);
	Number=0x00;
	  }
}	  
}

 
