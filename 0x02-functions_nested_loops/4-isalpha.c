#include "main.h"

/**
 * _isalpha - Returns 1 for upper or lowercase,
 * else return 0 otherwise
 *
 * @c: character code in ASCII
 *
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
