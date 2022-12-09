#include <stdio.h>

/**
 * main - Entry point
 * Description: print a lowerCase alphabet,
 *followed by uppercase and then a new line 
 * Return: Always 0 (Success)
*/
int main(void)
{
	int asciiLowerCase;
	int asciiUpperCase;

	for (asciiLowerCase = 97; asciiLowerCase < 123; asciiLowerCase++)
		putchar(asciiLowerCase);
	for (asciiUpperCase = 65; asciiUpperCase < 91; asciiUpperCase++)
		putchar(asciiUpperCase);
	putchar(10);
	return (0);
}

