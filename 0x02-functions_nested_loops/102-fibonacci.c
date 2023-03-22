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
		int digits[10], num_digits = 0, temp = third;

		while (temp > 0)
		{
			digits[num_digits] = temp % 10;
			temp /= 10;
			num_digits++;
		}
		for (int j = num_digits - 1; j >= 0; j--)
		{
			putchar(digits[j] + '0');
		}
		if (i < 47)
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
