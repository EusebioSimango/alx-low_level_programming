#include <stdio.h>

int print_alphabet()
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
		putchar(letter);
	}
	putchar(10);
	return (0);
}

