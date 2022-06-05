#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all aphabets except q and e
 * putchar to be used only twice
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'e' && c != 'q')
	putchar(c);
	}
	putchar('\n');
	return (0);
}
