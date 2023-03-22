#include <stdio.h>
#include "main.h"

/**
 *main - Prints letters in the alphabet
 *Return: 0
 */

int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; ++c)
        putchar("%c ", c);
	return (0);
}
