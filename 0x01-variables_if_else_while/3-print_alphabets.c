#include <stdio.h>



/**
 *
 * *  Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 *  */



int main(void)

{

	int ch;

	for (ch = 97; ch <= 122; ch++)

	{

			putchar(ch);

	}

	for (ch = 65; ch <= 90; ch++)

	{

			putchar(ch);

	}

	putchar(10); /* this is an ascii code for new line */



	return (0);

}
