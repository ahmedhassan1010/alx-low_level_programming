#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the character to be checked
 *
 * Description: This function checks if the input character is in lowercase
 * It uses a loop to compare the input character with each lowercase letter in
 * the alphabet. If the character is lowercase, the function returns 1. If it
 * is not lowercase, the function returns 0.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
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
