#include <xc.h>



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
