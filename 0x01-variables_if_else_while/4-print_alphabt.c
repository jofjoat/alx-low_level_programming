#include <stdio.h>

/*
 * main - prints alphabets in lowercase 
 * excepts q and e.
 * Return: Always 0 (Success)
 */

int main(void)
{
    char ch = 'a';

    while (ch <= 'z') {
        if (ch == 'e' && ch == 'q') {
            continue;
        }
        else {
            putchar(ch);
        }
        ch++;
    }
    putchar('\n');
    return (0);
}