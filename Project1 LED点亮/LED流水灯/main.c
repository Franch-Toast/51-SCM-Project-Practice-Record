	
#include <reg52.h>
typedef unsigned int u16;
typedef unsigned char u8; //Ҳ�ɲ����ж���

void delay(u16 Time)
{
 while(Time--);
}
//�˴���һ����̫��ȷ����ʱ��������ȷ����Ӧ��ͨ����ʱ��ʵ��
main()
{
	u8 i;
  while(1)
  {
	for(i=0;i<=7;i++)
	{
		P2=~(0x01<<i);
		//��2�������е����о� 1 ���� i λ��Ȼ��ȡ����8λ�������P2
		delay(50000);
	}
   }
}	
/* Ҳ����ʹ��keilͷ�ļ���#include "intrins.h"�е�
���ƺ��� _crol_(2������,�ƶ�λ��)
���ƺ��� _cror_(2������,�ƶ�λ��)
����λ���ܾ��൱��һ��������ѭ���ƶ�
*/