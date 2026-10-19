#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
 * Author: Tahir Khalid Musa 
 * program: WinMingle Community C Training
 * Description: this program can generate a random number always when runing it either positive, negative or zero.
 */
int main(void)
{
   int n;
   srand(time(0));
   n = rand() - RAND_MAX / 2;
	   if ( n > 0)
		   printf("%i is positive\n" , n);
           else if (n < 0)
		   printf("%i is negative\n" , n);
           else 
		   printf("%i is zero\n" , n);
           return(0);


}

