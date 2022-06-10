#include "main.h"

/**
 *   _isdigit - Is a function that checks for a digit
 *  it looks from 0 - 9
 *  @x: Number to be checked.
 *  Return: 1 for a character that will be a digt or for anything else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
