#include <stdio.h>
#include <stdlib.h>

/* Author: Tahir Khalid Musa 
 * Program: WinMingle Community C Training 
 * Description: print all combination of single digit number seperated by commas and spaces
 */

int main(void) {
     char x = '0';
     
     while(x <= '9') {
	     putchar(x);
	     putchar(',');
	     putchar(' ');
	     x++;
     }
             putchar('\n');
     return(0);
}
