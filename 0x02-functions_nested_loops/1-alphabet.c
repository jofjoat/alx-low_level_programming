#include "main.h"

/*
 * main - a program that prints the alphabet in lowercase
 * Return: 0 ends program successfully
*/
void print_alphabet(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
