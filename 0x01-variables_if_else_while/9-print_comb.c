

#include <stdio.h>



/*
 * Write a program that prints all possible combinations of single-digit numbers. 
 *Return : always 0
 */





int main(void)

{

	int ch;

	for (ch = 48; ch <= 57; ch++)

	{

		putchar(ch);

		if(ch !=57)

		{

			putchar(44);

			putchar(32);

		}

	}

	putchar(10); /*this is ancii code for new line*/



	return (0);

}
