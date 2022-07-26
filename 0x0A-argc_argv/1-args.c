#include <stdio.h>

/**
 * main - program that prints the number
 * of arguments.
 * @argc: the number of arguments
 * @argv: array that points to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return (0);
}
