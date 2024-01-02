#include "main.h"

/**
 * print_alphabet - function that prints alphabet, in lowercase
 * Return: void
*/
void print_alphabet(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
