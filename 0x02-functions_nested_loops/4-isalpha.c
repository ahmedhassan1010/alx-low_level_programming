#include "main.h"

/**
 * _isalpha - checks if a character is alphabet
 * @c: the character to be checked
 *
 * Description: This function checks if the input character is an alpha
 * It uses a conditions to compare the input character with condition
 * the alphabet. If the character is an alphabet, the function returns 1.
 * if is not, the function returns 0.
 *
 * Return: 1 if the character is lowercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
