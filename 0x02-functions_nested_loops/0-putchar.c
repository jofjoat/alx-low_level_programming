#include <stdio.h>

/**
 * main - a program that prints "_putchar"
 * Return: 0 ends a program
*/
int main()
{
	int i = 0;
	char text[9] = "_putchar";

	for(i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar("\n");
	return(0);
}
