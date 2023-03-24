#include "main.h"
/**
 * _isdigit - Print digits
 * @c: int to be checked
 * Return: 0
 */
int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || (c >= 48 && c <= 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
