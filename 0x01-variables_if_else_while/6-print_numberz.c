#include <stdio.h>
#include <stdlib.h>

/* Author: Tahir Khalid Musa
 * Program: WinMingle Community C Training 
 * Description: this program print the number base 10  using int  data type
 */

int main(void) {
        int x = 0;
	
	while( x <= 9) {
		putchar(48 + x);
		x++;
	}
                putchar('\n');
	return(0);              
}
