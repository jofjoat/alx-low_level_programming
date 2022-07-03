#include <stdio.h>

/**
 * main - prints all the base 10 single digits,
 * below the number 10
 * Return: Aways 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
        n++;
	}
	printf("\n");
	return (0);
}
