#include "Main.h"
#include <string.h>
/**
* _strcmp - a function that compares two strings
* @s1: string 1 input to compare
* @s2: against this other string 2
* Return: integer 0 if s1 and s2 are equal
* negative integer if the stopping character
* in @s1 was less than the stopping
* character in @s2positive integer if the stopping character
*  in @s1 was greater than the stopping
*   character in @s2
*/
int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);
	return (result);
}
