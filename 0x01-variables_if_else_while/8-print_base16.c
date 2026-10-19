#include <stdio.h>
#include <stdlib.h>

/* 
 * Author: Tahir Khalid Musa 
 * Program: WinMingle Community C Training
 * Description:
 */

int main(void) {
	char x = '0';
	while(x <= '9') {
		putchar(x);
		x++;
	}
      
	     x = 'a';
	while(x <= 'f') {
		putchar(x);
		x++;
	}
	        putchar('\n');
	return(0);
}

