#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - annoying
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	b = n % 10;
	if (b > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
	if (b == 0)
		printf("Last digit of %d is %d and is 0\n", n, b);
	if (b < 6 && b != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, b);
	return (0);
}
