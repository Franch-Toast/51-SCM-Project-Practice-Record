	
#include <reg52.h>
typedef unsigned int u16;
typedef unsigned char u8; //Ҳ�ɲ����ж���
sbit LED1=P2^0;

void delay(u16 Time)
{
 while(Time--);
}
//�˴���һ����̫��ȷ����ʱ��������ȷ����Ӧ��ͨ����ʱ��ʵ��
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

