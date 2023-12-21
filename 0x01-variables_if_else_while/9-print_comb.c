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

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (j < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
