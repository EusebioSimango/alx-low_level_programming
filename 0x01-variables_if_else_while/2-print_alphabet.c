#include <stdio.h>

/**
 * main - Entry point
 * Description: print the alphabet and then a new line
 * Return: Always 0 (Sucess)
*/
int main(void)
{
	int i;

        for (i = 97; i < 123; i++)
		putchar(i);
	putchar(10);
	return (0);
}

