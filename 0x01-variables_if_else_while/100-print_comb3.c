#include <stdio.h>

/**
 * main - Entry point
 * Description: print only the smallest comb. of 2 digit.
 * Return: Always 0 (Success)
*/
int main(void)
{
	int firstDigit;
	int secondDigit;

	firstDigit = 48;
	while (1 == 1)
	{
		for (secondDigit = 49; secondDigit < 58; secondDigit++)
		{
			if ((firstDigit != secondDigit) && (secondDigit > firstDigit))
			{
				putchar(firstDigit);
				putchar(secondDigit);
				if ((firstDigit == 56) && (secondDigit == 57))
					break;
				putchar(44);
				putchar(32);
			}
		}
		if (firstDigit == 57)
			break;
		firstDigit++;
	}
	putchar(10);
	return (0);
}

