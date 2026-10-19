#include <stdio.h>
#include <stdlib.h>

/* Author: Tahir Khalid Musa
 * Program: WinMingle Community C Training
 * Description: print alphabet from z to a 
 * */

int main(void) {
        char x = 'z';
	while(x >= 'a') {
		putchar(x);
		x--;
	}
	        putchar('\n');
        return(0);
}
