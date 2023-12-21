#include <stdio.h>

/**
 * main - a program that prints all
 * possible combination of three digits.
 * Return: 0 ends program successfully.
*/
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				if (i != j && i != k && j != k && i < j && j < k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
