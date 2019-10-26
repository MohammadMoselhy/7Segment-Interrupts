/*
 * main.c
 *
 * Created: 25-Oct-19 10:38:39 AM
 *  Author: Lenovo
 */ 


#include "PROTOTYPE.h"

int main(void)
{
	char i;
	LED_init('B',0);
	LED_init('B',1);
	LED_init('B',2);
	BUT_init('D',2);
	sevenSegmentInit('A');
	sei();
	MCUCR|=(1<<ISC00)|(1<<ISC01);
	GICR|=(1<<INT0);
    while(1)
    {
		for (i=0 ; i<=9 ; i++)
		{
			sevenSegmentWrite('A',i);
			_delay_ms(10);
		}			
    }
}

ISR (INT0_vect)
{
	char i=0;
	for (i=0 ; i<9 ; i++)
	{
		LED_on('B',0);
		LED_on('B',2);
		LED_off('B',1);
		
		_delay_ms(250);
		
		LED_off('B',0);
		LED_off('B',2);
		LED_on('B',1);
		
		_delay_ms(250);
		LED_off('B',0);
		LED_off('B',1);
	}		
}