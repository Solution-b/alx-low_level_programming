

#include <stdio.h>



/**
 *
 * *  Write a program that prints the alphabet in lowercase, followed by a new line.
 *
 *  */



int main(void)

{

	char ch;

	for (ch = 97; ch <= 122; ch++)

	{

		if (ch != 'q' && ch != 'e')

		{



				putchar(ch);

		}

	}



	putchar(10); /* this is an ascii code for new line */



	return (0);

}
