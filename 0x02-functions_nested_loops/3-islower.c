#include "main.h"

/**
 * _islower: checks for lowercase character
 * @c: an input character
 * Description: function uses _putchar to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase and 0 if uppercase
 */

int _islower(int c)
{
	char ch;
	int lower = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
			lower = 1;
	}

	return (lower);
}
