#include "main.h"
/**
 * print_line - this function is used to print lines.
 * @n: is the number of _ should be printed.
 *
 * Return: no return.
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
