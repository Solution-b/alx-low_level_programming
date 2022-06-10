#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * Description: Do not print 2 and 4
 * Return: The numbers from 0 -9 without 2&4
 */
void print_most_numbers(void)
{
	int x = 0

		for (; x <= 9; x++)
		{
			if (x == 2 || x == 4)
			{
				comtinue;
			}
			else
			{
				_putchar(x + '0');
			}
		}

	_putchar('\n');
}
