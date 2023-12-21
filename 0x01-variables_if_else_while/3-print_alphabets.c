#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints the alphabet in
 * lowercase and then uppercase.
 * Return: 0 ends program.
*/
int main(void)
{
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
