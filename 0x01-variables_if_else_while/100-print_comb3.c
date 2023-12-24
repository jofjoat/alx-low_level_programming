#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints all the possible
 * combination of two digits.
 * Return: 0 ends the program.
*/
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i != j && i < j)
			{
				putchar(i + '0');
				putchar(j + '0');

				if (i < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
