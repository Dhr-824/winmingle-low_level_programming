#include <stdio.h>

/**How size of data type 
 * Author: Tahir Khalid Musa
 * Program: WinMingle Community C Training
 * Description: This program tells the computer to print how long of each computer that can store */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n",sizeof(char));
	printf("Size of an int: %zu byte(s)\n",sizeof(int));
	printf("Size of a long int: %zu byte(s)\n",sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n",sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n",sizeof(float));
	return(0);
}
