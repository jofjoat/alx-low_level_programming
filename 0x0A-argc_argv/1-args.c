#include <stdio.h>

/**
 * main - program that prints the number
 * of arguments.
 * @argc: the number of arguments
 * @argv: array that points to the arguments
 * Return: Always 0
 */
int main(int argc, char const *argv[])
{
    (void)argv;
    printf("%i\n", argc - 1);
    return (0);
}
