#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints all single digits number of
 * base 10 starting from 0.
 * Return: 0 ends the program.
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}

