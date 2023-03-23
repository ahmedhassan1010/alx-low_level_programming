#include "main.h"
#include <stdio.h>
/**
 * main: the entry point of this program.
 * Description: this program will print fizz and buzz and fizzbuzz.
 * Return: (0) if successful
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
	}
	printf("\n");

	return (0);
}
