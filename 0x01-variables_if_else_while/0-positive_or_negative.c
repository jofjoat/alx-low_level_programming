#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that returns a result if
 * a condition is met.
 * Return: 0 ends the program successfully.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
