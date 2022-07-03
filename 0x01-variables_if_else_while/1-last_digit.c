#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -entry point
 *
 * Description: Print the last digit of the variable n.
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

		int n, last_digitt;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					last_digitt = n % 10;
					if (last_digitt > 5)
					{
					printf("Last digit of %d is %d and is greater than 5\n", n, last_digitt);
					}
					else if (last_digitt == 0)
					{
					printf("Last digit of %d is %d and is 0\n", n, last_digitt);
					}
					else if (last_digitt < 6 && last_digitt != 0)
					{
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digitt);
					}
					return (0);

}
