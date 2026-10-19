#include <stdio.h>
#include <stdlib.h>

/**
 * Author: Tahir Khalid Musa
 * program: WinMingle Community C Training 
 * Description: Using putchar() to print the alphabet from 'a' to 'z'
 */
int main(void)
{
char x = 'a';
	while ( x <= 'z') {
		putchar(x);
	        x++;
	}
	        putchar('\n');
        return(0);

}
