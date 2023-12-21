#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints all the aplhabet
 * characters in lowercase.
 * Return: 0 ends the program.
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
