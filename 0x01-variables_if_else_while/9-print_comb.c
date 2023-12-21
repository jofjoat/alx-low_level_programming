#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints all possible
 * combinations of a single digit.
 * Return: 0 ends program successfully.
*/
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
