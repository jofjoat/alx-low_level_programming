#include "main.h"

/*
 * main - a program that prints the 
 * alphabet in lowercase
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
