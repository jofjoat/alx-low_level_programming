#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that prints lowercase aplhabets in
 * reverse followed by a new line.
 * Return: 0 ends the program successfully.
*/
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
