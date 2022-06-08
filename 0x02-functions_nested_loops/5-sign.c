#include "main.h"

/**
 * print_sign - returns 1 and print +,
 * returns 0 and prints 0 if n is zero,
 * returns -1 and prints - if n is less than zero
 *
 * @n: character code ASCII
 *
 * Return: Always 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if ( n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n')
}
