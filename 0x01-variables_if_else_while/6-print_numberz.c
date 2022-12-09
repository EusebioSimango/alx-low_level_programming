#include <stdio.h>

/**
 * main - Entry point
 * Description: print decimal numbers using putchar()
 * Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
		putchar(num);
	putchar(10);
	return (0);
}

