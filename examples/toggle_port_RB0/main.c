#include <xc.h>


/*** FDEVOPT ***/
#pragma config SOSCHP = OFF
#pragma config ALTI2C = OFF
#pragma config FUSBIDIO = OFF
#pragma config FVBUSIO = OFF
#pragma config USERID = 0xffff

/*** FICD ***/
#pragma config JTAGEN = OFF
#pragma config ICS = PGx1

/*** FPOR ***/
#pragma config BOREN = BOR0
#pragma config RETVR = ON
#pragma config LPBOREN = OFF


/*** FWDT ***/
#pragma config SWDTPS = PS524288
#pragma config FWDTWINSZ = PS25_0
#pragma config WINDIS = OFF
#pragma config RWDTPS = PS1048576
#pragma config RCLKSEL = LPRC
#pragma config FWDTEN = OFF

/*** FOSCSEL ***/
#pragma config FNOSC = FRCDIV
#pragma config PLLSRC = PRI
#pragma config SOSCEN = ON
#pragma config IESO = ON
#pragma config POSCMOD = HS
#pragma config OSCIOFNC = OFF
#pragma config SOSCSEL = ON
#pragma config FCKSM = CSECME

/*** FSEC ***/
#pragma config CP = OFF


/*in seconds*/
void delay(float val)
{
    int i;
    unsigned long int new_val = (unsigned long int)( val * 1000000 );
    for (i=0;i<new_val;i++){
    
    }
}

void main(void) {
    
        
	int i;
    
    LATBCLR  = 0x0001;     // RB0 Off  
    TRISBCLR = 0x0001;     // RB0 as output  
 
	while (1) {
        LATBINV = 0x0001;// toggle RB0   
        delay(0.5);
        
	}
	
	return;
}
