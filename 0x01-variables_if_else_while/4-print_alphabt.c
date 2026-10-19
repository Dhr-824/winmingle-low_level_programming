#include <stdio.h>
#include <stdlib.h>

/* 
 * Author: Tahir Khalid Musa 
 * Program: WinMingle Community C Training 
 * Description: Using putchar to print alphabt except 'e' and 'q' with lowercase letter
 */
int main(void) {
     
	char x = 'a';
	while (x <= 'z') {
	if( x != 'e' && x != 'q' ) {
		putchar(x);
	}
	        x++;
	}
	        putchar('\n');
	return(0);
}
