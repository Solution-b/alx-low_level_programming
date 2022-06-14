#include "main.h"

/**
 * _strlen -> a function that returns the length of a string
 * @s: Sting pointer to pass to the funtion
 * Return: Returns lenght of the string
 */
int _strlen(char *s)
{
	int u;

	while (s[u] !=  '\0')
	{
		u++;
	}
	return (u);
}
