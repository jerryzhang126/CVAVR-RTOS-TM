#include <mega32.h>
#include <delay.h>
#define LOW 0
#define HIGH 1

// Declare your global variables here

void main(void)
{
// Declare your local variables here
PORTB=0x00;
DDRB=0xFF;    

PORTD=0x00;
DDRD=0x00;

while (1)
      {
    if(PIND.0==1) PORTB.0= 1 ;
        else PORTB.0=0;
    if(PINB.0==1) 
      PORTB.1=1;
      delay_ms(200);
      PORTB.1=0;
      delay_ms(200); 
    }
}

