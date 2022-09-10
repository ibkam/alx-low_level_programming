#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0 if successful
 */
int main(void)
{
	int var;

	for (var = 0; var < 99; var++)
	{
		int var1;

		for (var1 = var + 1; var1 < 100; var1++)
		{
			putchar((var / 10) + '0');
			putchar((var % 10) + '0');
			putchar(' ');
			putchar((var1 / 10) + '0');
			putchar((var1 % 10) + '0');

			if (var != 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}

	putchar('\n');
	return (0);

}
