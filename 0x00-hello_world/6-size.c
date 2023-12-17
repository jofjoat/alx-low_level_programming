#include <stdio.h>

/**
 * main - a program that display sizes of various types.
 * Return: 0 ends program.
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a char: %lu byte(s)\n", sizeof(int));
	printf("Size of a char: %lu byte(s)\n", sizeof(long int));
	printf("Size of a char: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a char: %lu byte(s)\n", sizeof(float));
	return (0);
}
