#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the param which determine the indent.
 *
 * Return: no return.
 */
void print_diagonal(int n)
{
	int i, j, k;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < (n - 1); k++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
	}
	_putchar('\n');
}
