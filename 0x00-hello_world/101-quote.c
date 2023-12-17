#include <unistd.h>

/**
 * main - a program that prints a phrase.
 * Return: 1 end program indicating errors.
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
