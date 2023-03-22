#include <stdio.h>

/**
 * main - Yes
 * Return: 0
 */

int main(void)
{
	int sum = 0, first = 1, second = 2, third;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
		{
			sum += second;
		}
		third = first + second;
		first = second;
		second = third;
	}
	putchar(sum / 1000000 + '0');
	putchar((sum / 100000) % 10 + '0');
	putchar((sum / 10000) % 10 + '0');
	putchar((sum / 1000) % 10 + '0');
	putchar((sum / 100) % 10 + '0');
	putchar((sum / 10) % 10 + '0');
	putchar(sum % 10 + '0');
	putchar('\n');
	return (0);
}
