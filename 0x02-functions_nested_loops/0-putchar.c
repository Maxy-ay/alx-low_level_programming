#include "main.h"

/**
 * main - Entry point
 *
 * Description: print _putchar 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	char p[] = "_putchar";

	for (a = 1; a<= 8; a++)
	{
		_putchar(p[a]);
	}
	_putchar('\n');

	return (0);
}

	

