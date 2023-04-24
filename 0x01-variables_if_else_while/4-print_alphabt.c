#include <stdio.h>

/**
 * main - print the alphabet
 *
 * Description: print the alphabet except q & e
 *
 * Return: 0
 */

int main(void)
{
	int b = 97;

	while (b < 123)
	{
		if (b != 101 && b != 113)
		{
			putchar(b);
		}
		b++;
	}
	putchar(10);

	return (0);
}
