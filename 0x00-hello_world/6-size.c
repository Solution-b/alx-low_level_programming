/**
 * *  * main - Entry point
 * *  *  *
 * *   *Return : always 0 (success)
 * *  **/

int main(void)
{
	int a;
	long int b;
	long long int C;
	char d;
	float f;
		
	printf("Size of an char: %lu byte(s)\n", (unasigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unasigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unasigned long)sizeoff(b));
	printf("Size of an long long int: %lu byte(s)\n", (unasigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unasigned long) sizeoff(f));

	return (0);
}
