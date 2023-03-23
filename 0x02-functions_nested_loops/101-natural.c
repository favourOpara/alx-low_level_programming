#include <stdio.h>
/**
 * main - A sequence
 * Return: 0
 */

int main(void)
{
	int sum = 0;

	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	putchar(sum / 1000 + '0');
	putchar((sum / 100) % 10 + '0');
	putchar((sum / 10) % 10 + '0');
	putchar(sum % 10 + '0');
	putchar('\n');
	return (0);
}
