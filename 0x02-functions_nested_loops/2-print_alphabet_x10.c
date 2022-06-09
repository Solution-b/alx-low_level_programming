#include "main.h"

<<<<<<< HEAD
/*
 * * main - prints putchar
 * * Return: always 0
 * */
=======
/**
* print_alphabet_x10 -> prints the lowercase alphabets
*/
>>>>>>> 1602a2bcb9c0c1101c142618e90e6aae18388815

void print_alphabet_x10(void)

{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
<<<<<<< HEAD
		}	
=======
		}
>>>>>>> 1602a2bcb9c0c1101c142618e90e6aae18388815
		_putchar('\n');
	}
}
