#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints all the numbers
 * of base 16 in lowercase.
 * Return: 0 ends the program successfully.
*/
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar(i - 10 + 'a');
		}
	}
	putchar('\n');
	return (0);
}
