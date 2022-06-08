#include "main.h"

/**
 * _abs - returns the absolute value of integer
 *
 * @n: character code ASCII
 *
 * Return: Always 0 (success)
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	_putchar('\n');
}
