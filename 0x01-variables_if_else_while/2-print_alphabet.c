#include <stdio.h>

/**
 * main - print alpha in lower case
 * Return: Always 0
 */
int main(void)
{

	int lc = 'a';

	while (lc <= 'z')
	{
		putchar(lc);
		lc++;
	}
	putchar('\n');
	return (0);
}
