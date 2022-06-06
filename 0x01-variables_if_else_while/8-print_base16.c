#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing all base 16 numbers in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 1; a <= 9; a++)
	putchar(a + '0');

	for (a = 'a'; a <= 'f'; a++)
	putchar(a);

	putchar('\n');

	return (0);
}
