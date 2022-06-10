#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * Description: Do not print 2 and 4
 * Return: The numbers from 0 -9 without 2&4
 */
void print_most_numbers(void)
{
	int x;

		for (x = 0; x < 10; x++)
		{
			if (x != 2 && x != 4)
				_putchar(x + '0');
		}
		_putchar('\n');
}
