#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9 with new line at end.
 * Return: no return.
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
