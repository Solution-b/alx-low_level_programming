

#include <stdio.h>


int main(void)

{

\*
* headecimal 0 1 2 3 4 5  6 7 8 9 a b c d e 
*
*\

		char ch;

	int n;

	for (n = 48; n <= 57; n++)

	{

			putchar(n);

	}

	for (ch = 'a'; ch <= 'f'; ch++)

	{

			putchar(ch);

	}

	putchar(10); \*this is ancii code for new line*\



		return (0);

}






