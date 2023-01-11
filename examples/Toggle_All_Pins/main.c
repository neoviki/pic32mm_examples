#include <xc.h>

/*in seconds*/
void delay(float val)
{
    int i;
    unsigned long int new_val = (unsigned long int)( val * 1000000 );
    for (i=0;i<new_val;i++){
    
    }
}


#define PIN0 (1 << 0)
#define PIN1 (1 << 1)
#define PIN2 (1 << 2)
#define PIN3 (1 << 3)
#define PIN4 (1 << 4)
#define PIN5 (1 << 5)
#define PIN6 (1 << 6)
#define PIN7 (1 << 7)
#define PIN8 (1 << 8)
#define PIN9 (1 << 9)
#define PIN10 (1 << 10)
#define PIN11 (1 << 11)
#define PIN12 (1 << 12)
#define PIN13 (1 << 13)
#define PIN14 (1 << 14)
#define PIN15 (1 << 15)



void INIT_PORTA( int pin)
{
    LATACLR  = pin;     // RA<pin> Off  
    TRISACLR = pin;     // RA<pin> as output  
}

void INIT_PORTB( int pin)
{
    LATBCLR  = pin;     // RB<pin> Off  
    TRISBCLR = pin;     // RB<pin> as output  
}


void INIT_PORTC( int pin)
{
    LATCCLR  = pin;     // RC<pin> Off  
    TRISCCLR = pin;     // RC<pin> as output  
}

void TOGGLE_PORTA(int pin)
{
    LATAINV = pin; 
}

void TOGGLE_PORTB(int pin)
{
    LATBINV = pin; 
}

void TOGGLE_PORTC(int pin)
{
    LATCINV = pin; 
}

void INIT_ALL_PORTS()
{
    
    INIT_PORTA(PIN0);
    INIT_PORTA(PIN1);
    INIT_PORTA(PIN2);
    INIT_PORTA(PIN3);
    INIT_PORTA(PIN4);
    INIT_PORTA(PIN5);
    INIT_PORTA(PIN6);
    INIT_PORTA(PIN7);
    INIT_PORTA(PIN8);
    INIT_PORTA(PIN9);
    INIT_PORTA(PIN10);
    INIT_PORTA(PIN11);
    INIT_PORTA(PIN12);
    INIT_PORTA(PIN13);
    INIT_PORTA(PIN14);
    INIT_PORTA(PIN15);
    
    INIT_PORTB(PIN0);
    INIT_PORTB(PIN1);
    INIT_PORTB(PIN2);
    INIT_PORTB(PIN3);
    INIT_PORTB(PIN4);
    INIT_PORTB(PIN5);
    INIT_PORTB(PIN6);
    INIT_PORTB(PIN7);
    INIT_PORTB(PIN8);
    INIT_PORTB(PIN9);
    INIT_PORTB(PIN10);
    INIT_PORTB(PIN11);
    INIT_PORTB(PIN12);
    INIT_PORTB(PIN13);
    INIT_PORTB(PIN14);
    INIT_PORTB(PIN15);
    
    INIT_PORTC(PIN0);
    INIT_PORTC(PIN1);
    INIT_PORTC(PIN2);
    INIT_PORTC(PIN3);
    INIT_PORTC(PIN4);
    INIT_PORTC(PIN5);
    INIT_PORTC(PIN6);
    INIT_PORTC(PIN7);
    INIT_PORTC(PIN8);
    INIT_PORTC(PIN9);
    INIT_PORTC(PIN10);
    INIT_PORTC(PIN11);
    INIT_PORTC(PIN12);
    INIT_PORTC(PIN13);
    INIT_PORTC(PIN14);
    INIT_PORTC(PIN15);
 
}

void main(void) {
    
        
	int i;
    
    INIT_ALL_PORTS();
 
	while (1) {
        

        TOGGLE_PORTA(PIN2);
        TOGGLE_PORTA(PIN3);
        TOGGLE_PORTA(PIN4);
        TOGGLE_PORTA(PIN5);
        TOGGLE_PORTA(PIN6);
        TOGGLE_PORTA(PIN7);
        TOGGLE_PORTA(PIN8);
        TOGGLE_PORTA(PIN9);
        TOGGLE_PORTA(PIN10);
        TOGGLE_PORTA(PIN11);
        TOGGLE_PORTA(PIN12);
        TOGGLE_PORTA(PIN13);
        TOGGLE_PORTA(PIN14);
        TOGGLE_PORTA(PIN15);
        
        TOGGLE_PORTB(PIN0);
        TOGGLE_PORTB(PIN1);
        TOGGLE_PORTB(PIN2);
        TOGGLE_PORTB(PIN3);
        TOGGLE_PORTB(PIN4);
        TOGGLE_PORTB(PIN5);
        TOGGLE_PORTB(PIN6);
        TOGGLE_PORTB(PIN7);
        TOGGLE_PORTB(PIN8);
        TOGGLE_PORTB(PIN9);
        TOGGLE_PORTB(PIN10);
        TOGGLE_PORTB(PIN11);
        TOGGLE_PORTB(PIN12);
        TOGGLE_PORTB(PIN13);
        TOGGLE_PORTB(PIN14);
        TOGGLE_PORTB(PIN15);
        
        TOGGLE_PORTC(PIN0);
        TOGGLE_PORTC(PIN1);
        TOGGLE_PORTC(PIN2);
        TOGGLE_PORTC(PIN3);
        TOGGLE_PORTC(PIN4);
        TOGGLE_PORTC(PIN5);
        TOGGLE_PORTC(PIN6);
        TOGGLE_PORTC(PIN7);
        TOGGLE_PORTC(PIN8);
        TOGGLE_PORTC(PIN9);
        TOGGLE_PORTC(PIN10);
        TOGGLE_PORTC(PIN11);
        TOGGLE_PORTC(PIN12);
        TOGGLE_PORTC(PIN13);
        TOGGLE_PORTC(PIN14);
        TOGGLE_PORTC(PIN15);
        
        
        delay(0.25);
	}
	
	return;
}
