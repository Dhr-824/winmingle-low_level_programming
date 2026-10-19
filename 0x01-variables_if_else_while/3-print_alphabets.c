#include <stdio.h>
#include <stdlib.h>

/*
 * Author: Tahir Khalid Musa
 * Program: WinMingle Community C Training 
 * Description: Using putchar() to print the alphabets in lowercase and uppercase in one line
 */
int main(void){
   
	char x = 'a';
		while ( x <= 'z' ) {
			putchar(x);
			x++;
		}
                
             x = 'A';
	        while ( x <= 'Z' ) {
			putchar(x);
			x++;
		}
		        putchar('\n');
		return(0);
	
        
}
