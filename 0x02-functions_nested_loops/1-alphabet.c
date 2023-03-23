#include <stdio.h>
#include "main.h"

/**
 *main - Prints letters in the alphabet
 *Return: 0
 */

int main(void)
{
	void print_alphabet(void)
	{
		char c = 'a';

		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
	}
	int main(void)
	{
		print_alphabet();
		return (0);
	}
}
