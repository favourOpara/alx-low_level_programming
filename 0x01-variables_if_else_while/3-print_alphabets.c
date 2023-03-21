#include<stdio.h>
/**
 * main - Alphabet
 * Return: 0
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c !='o')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
