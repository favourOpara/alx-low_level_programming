#include <stdio.h>
/**
 * main - Print
 * Return: 0
 */
int main(void)
{
	void print_to_98(int n);
	{
		int i, n;

		for (i = n; i <= 98; i++)
		{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
