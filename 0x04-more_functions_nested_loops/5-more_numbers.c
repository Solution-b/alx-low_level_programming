#include "main.h"

/**
* More_numbers -> Printing more numbers
*/

void more_numbers(void);
{
	int     x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
