#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * _isupper - Checks uppercase
 * @c: Variable text
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
