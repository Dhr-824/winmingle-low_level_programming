#include <stdio.h>
#include <stdlib.h>

/* Author: Tahir Khalid Musa
 * Program: WinMingle Community C Training
 * Description: Generate numbers from 01 to  not 10 using arithmetic operations
 * to separate the tens and units digits, th en display them
 * individually with putchar().
 */

int main(void)
{
   int i;
   
   int j;
       
        for ( i = 0;i <= 8; i++ )
	{
	    for (j = i + 1;j <= 9; j++ )
	    {
	        putchar( i + '0' );
	        putchar( j + '0' );
		
		if ( i != 8 || j != 9 )
		{
		    putchar( ',' );
		    putchar( ' ' );
		}
	    }
	}

   putchar('\n');
   return(0);
}
