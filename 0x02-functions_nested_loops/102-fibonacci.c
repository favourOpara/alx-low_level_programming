#include <stdio.h>
/**
 * main - Fibonacci
 * Return: 0
 */

int main(void)
{
	int first = 1, second = 2, third;

	putchar('1');
	putchar(',');
	putchar(' ');
	putchar('2');
	putchar(',');
	putchar(' ');
	for (int i = 0; i < 48; i++)
	{
		third = first + second;
		int num = third;

		int digits = 0;

		while (num > 0)
		{
			digits++;
			num /= 10;
		}
		for (int j = 0; j < digits; j++)
		{
			putchar((third / (int) pow(10, digits - j - 1)) % 10 + '0');
		}
		if (i != 47)
		{
			putchar(',');
			putchar(' ');
		}
		first = second;
		second = third;
	}
	putchar('\n');
	return (0);
}

