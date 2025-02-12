#include "HT66F3195.h"
#define  LED1 _pa0
#define  LED2 _pa1
#define  LED3 _pa2
#define  LED4 _pa3
#define  LED5 _pa4
#define  LED6 _pa5
#define  LED7 _pa6
#define  LED8 _pa7
#define  LED9 _pb0
#define  LED10 _pb1
#define  LED11 _pb2
#define  LED12 _pb3
#define  LED13 _pb4
#define  LED14 _pb5
#define  LED15 _pb6
#define  LED16 _pc0
#define  LED17 _pc1
#define  LED18 _pc2
#define  LED19 _pc4
#define  LED20 _pc5
#define  LED21 _pd1
#define  LED22 _pd2

#define  LED1_DIR _pac0 = 0;			
#define  LED2_DIR _pac1 = 0;			
#define  LED3_DIR _pac2 = 0;			
#define  LED4_DIR _pac3 = 0;			
#define  LED5_DIR _pac4 = 0;			
#define  LED6_DIR _pac5 = 0;			
#define  LED7_DIR _pac6 = 0;			
#define  LED8_DIR _pac7 = 0;			
#define  LED9_DIR _pbc0 = 0;			
#define  LED10_DIR _pbc1 = 0;			
#define  LED11_DIR _pbc2 = 0;			
#define  LED12_DIR _pbc3 = 0;			
#define  LED13_DIR _pbc4 = 0;			
#define  LED14_DIR _pbc5 = 0;			
#define  LED15_DIR _pbc6 = 0;			
#define  LED16_DIR _pcc0 = 0;			
#define  LED17_DIR _pcc1 = 0;			
#define  LED18_DIR _pcc2 = 0;			
#define  LED19_DIR _pcc4 = 0;			
#define  LED20_DIR _pcc5 = 0;			
#define  LED21_DIR _pdc1 = 0;			
#define  LED22_DIR _pdc2 = 0;			

#define  SW _pa3
#define LED_DIR _pac0 = 0;
#define SW_DIR _pac3 = 1;

void main()
{
	LED1_DIR;
	LED2_DIR;
	LED3_DIR;
	LED4_DIR;
	LED5_DIR;
	LED6_DIR;
	LED7_DIR;
	LED8_DIR;
	LED9_DIR;
	LED10_DIR;
	LED11_DIR;
	LED12_DIR;
	LED13_DIR;
	LED14_DIR;
	LED15_DIR;
	LED16_DIR;
	LED17_DIR;
	LED18_DIR;
	LED19_DIR;
	LED20_DIR;
	LED21_DIR;
	LED22_DIR;

	volatile unsigned int i=0;
	//volatile unsigned int j=0;
	while(1)
	{
		for(i=0;i<=50000;i++);
		LED1 = 0;
		LED2 = 0;
		LED3 = 0;
		LED4 = 0;
		LED5 = 0;
		LED6 = 0;
		LED7 = 0;
		LED8 = 0;
		LED9 = 0;
		LED10 = 0;
		LED11 = 0;
		LED12 = 0;
		LED13 = 0;
		LED14 = 0;
		LED15 = 0;
		LED16 = 0;
		LED17 = 0;
		LED18 = 0;
		LED19 = 0;
		LED20 = 0;
		LED21 = 0;
		LED22 = 0;
		for(i=0;i<=50000;i++);
		LED1 = 1;
		LED2 = 1;
		LED3 = 1;
		LED4 = 1;
		LED5 = 1;
		LED6 = 1;
		LED7 = 1;
		LED8 = 1;
		LED9 = 1;
		LED10 = 1;
		LED11 = 1;
		LED12 = 1;
		LED13 = 1;
		LED14 = 1;
		LED15 = 1;
		LED16 = 1;
		LED17 = 1;
		LED18 = 1;
		LED19 = 1;
		LED20 = 1;
		LED21 = 1;
		LED22 = 1;		
								
						
	}
}	