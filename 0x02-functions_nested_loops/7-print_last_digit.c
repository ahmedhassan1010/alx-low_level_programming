#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @r: the number to print the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int r)
{
	int last;

	if (r < 0)
		r = -r;
	last = r % 10;
	_putchar(last + '0');

	return (last);
}
