#include<reg51.h>
void delay(unsigned int count)
{ unsigned int i;
	while(count)
	{
		i=115;
		while(i > 0)
			i--;
		count--;
	}
}
void main()
{
	P2 = 0x00;
	delay(1000);
	P2 = 0xFF;
	delay(1000);
}