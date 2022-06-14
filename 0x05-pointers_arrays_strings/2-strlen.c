#include "main.h"

/**
 * _strlen -> a function that returns the length of a string
 * @s: Sting pointer to pass to the funtion
 * Return: Returns lenght of the string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
		s++;
	}
	return (len);
}
