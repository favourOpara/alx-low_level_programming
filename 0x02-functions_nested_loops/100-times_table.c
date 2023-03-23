#include <stdio.h>

/**
 * main - Multipication
 * Return: 0
 */

int main(void)
{
	void print_times_table(int n)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int product = i * j;

				putchar(product / 10 + '0');
				putchar(product % 10 + '0');
				putchar(' ');
			}
			putchar('\n');
		}
	}
}
