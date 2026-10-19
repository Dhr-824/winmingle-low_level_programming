#include <stdio.h>
#include <stdlib.h>

/* Author: Tahir Khalid Musa
 * Program: WinMingle Community C Training 
 * Description: this program print the number base 10  using char data type
 */

int main(void) {
        char x = '0';
	
	while( x <= '9') {
		putchar(x);
		x++;
	}
                putchar('\n');
	return(0);              
}
