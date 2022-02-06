#include <lpc214x.h>
#include "LPC2148_delay.h"
#include "LPC2148_LCD_4_BIT_HEADER_FILE.h"

int f1=0,f2=0;

int main()
{
	PINSEL0 = 0X00000000;
	PINSEL1 = 0X00000000;
	PINSEL2 = 0X00000000;
	
	IODIR0 = 0X00000001;
	
	while(1)
	{
//		IOCLR0 = 0X0000000A;
		IOSET0 = 0X00000001;
		delay(5);
		
		IOCLR0 = 0X00000001;
//		IOSET0 = 0X00000005;
		delay(5);

//		IOCLR0 = 0X00000005;
//		IOSET0 = 0X00000006;
//		delay(500);

//		IOCLR0 = 0X00000006;
//		IOSET0 = 0X0000000A;
//		delay(500);
	}
}