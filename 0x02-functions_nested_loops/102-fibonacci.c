#include <stdio.h>
/**
 * main - Fibonacci
 * Return: 0
 */

int main(void)
{
	int first = 1, second = 2, third, count = 0;

	putchar('1');
	putchar(',');
	putchar(' ');
	putchar('2');
	putchar(',');
	putchar(' ');
	count += 2;
	while (count < 50)
	{
		third = first + second;
		printf("%d", third);
		putchar(',');
		putchar(' ');
		first = second;
		second = third;
		count++;
	}
	putchar('\n');
	return (0);
}
