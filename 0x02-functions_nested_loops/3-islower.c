#include "main.h"

/**
 * _islower: checks for lowercase character
 *
 * Return: Always 0 (Success)
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
