#include <stdio.h>

/**
 * main - Entry point
 * Description: print all possible different combination of 3 digits.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int a;
	int b;
	int c;

	a = 48;
	while (1 == 1)
	{
		for (b = 49; b < 57; b++)
		{
			for (c = 50; c < 58; c++)
			{
				if ((b != c) && (a < b) && (b < c))
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if ((a == 55) && (b == 56) && (c == 57))
						break;
					putchar(44);
					putchar(32);
				}
			}
		}
		a++;
		if (a == 56)
			break;
	}
	putchar(10);
	return (0);
}

