#include <xc.h>

/*in seconds*/
void delay(float val)
{
    int i;
    unsigned long int new_val = (unsigned long int)( val * 1000000 );
    for (i=0;i<new_val;i++){
    
    }
}


#define PIN_RB0 0x0001
#define PIN_RB1 0x0002
#define PIN_RB2 0x0004
#define PIN_RB3 0x0008
#define PIN_RB4 0x0010
#define PIN_RB5 0x0020
#define PIN_RB6 0x0040
#define PIN_RB7 0x0080



void INIT_PORTB( int pin)
{
    LATBCLR  = pin;     // RB<pin> Off  
    TRISBCLR = pin;     // RB<pin> as output  
}

void TOGGLE_PORTB(int pin)
{
    LATBINV = pin; 
}

void main(void) {
    
        
	int i;
    
    INIT_PORTB(PIN_RB0);
    INIT_PORTB(PIN_RB1);
    INIT_PORTB(PIN_RB2);
    INIT_PORTB(PIN_RB3);
    INIT_PORTB(PIN_RB4);
    INIT_PORTB(PIN_RB5);
    INIT_PORTB(PIN_RB6);
    INIT_PORTB(PIN_RB7);

	while (1) {
        TOGGLE_PORTB(PIN_RB0);
        TOGGLE_PORTB(PIN_RB1);
        TOGGLE_PORTB(PIN_RB2);
        TOGGLE_PORTB(PIN_RB3);
        TOGGLE_PORTB(PIN_RB4);
        TOGGLE_PORTB(PIN_RB5);
        TOGGLE_PORTB(PIN_RB6);
        TOGGLE_PORTB(PIN_RB7);
        delay(0.25);
	}
	
	return;
}
