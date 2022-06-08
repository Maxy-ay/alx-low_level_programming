#include "main.h"

/**
 * _islower - Returns 1 if lower case alphabet,
 * else returns 0 otherwise
 *
 * Return: Always 0 (success)
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
