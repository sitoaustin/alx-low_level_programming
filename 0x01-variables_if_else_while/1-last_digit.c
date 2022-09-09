#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - main initialization
*
*Return: is positive or is zero or is negative
*/
int main(void)
{
        int n;

        srand(time(0));

        n = rand() - RAND_MAX / 2;
/* your code goes there */
        int last;
        last = n % 10;
        if (last > 5)
        {
                printf("Last digit of ");
                printf("%d", n);
                printf("is greater than 5\n");
        }
        else if (last == 0)
        {
                printf("Last digit of ");
                printf("%d", n);
                printf("and is 0\n");
        }
        else if (last < 6)
        {
               printf("Last digit of ");
                printf("%d", n);
                printf("and is less than 6 and not 0\n");
        }
        return (0);
}

