#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times
 * the alphabet, in lowercase
 * Return: void
*/
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		c = 'a';
		i++;
	}
}
