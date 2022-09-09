#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* random_number - get square of number passed
*@n: the random number to check
*
*Return: is positive or is zero or is negative
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if(n>0){
		printf("is positive");
	}else if(n == 0){
		printf("0 is zero");
	}else{
		printf("is negative");
	}
	return (0);
}
