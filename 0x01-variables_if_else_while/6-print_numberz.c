#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single numbers of base 10 without using printf func
 *
 * Return: Alway 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	putchar(a + '0');

	putchar('\n');

	return (0);
}
