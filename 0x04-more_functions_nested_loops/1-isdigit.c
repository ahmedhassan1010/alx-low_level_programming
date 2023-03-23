#include "main.h"
/**
 * isdigit: checks if the input is a digit
 * @c: is the parameter if the function
 * Return: 1 if successful and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
