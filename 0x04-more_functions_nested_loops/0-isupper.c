#include "main.h"

/**
 * _isupper - check if a letter is uppercase
 * Return: 1 for uppercase or 0 for anything else
 * @x: the number to be checked
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
