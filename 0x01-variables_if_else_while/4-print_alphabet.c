#include <stdio.h>

/**
 * main - Entry point
 * Description: print the alphabet excep thr letters e and q
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 and i != 113)
			putchar(i);
	}
	putchar(10);
	return (0);
}

