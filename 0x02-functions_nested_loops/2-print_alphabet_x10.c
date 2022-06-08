#include "main.h"

/**
 * main - entry point
 *
 * Description: print the alphabet 10x
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int a, d;

	for (a = 0; a <= 9; a++)
	{
		for (d = 97; d <= 122; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
