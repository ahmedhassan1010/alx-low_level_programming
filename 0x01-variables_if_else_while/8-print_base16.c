#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
		if (i < 10)
			putchar(i + '0');
		else
			putchar('a' + i - 10);
	putchar('\n');

	return (0);
}
