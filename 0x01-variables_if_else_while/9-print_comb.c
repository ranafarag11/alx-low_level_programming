#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * Description: prints single digit  numbers with commas
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int r = 48;

	while (r < 58)
	{
		putchar(r);
		if (r != 57)
		{
			putchar(44);
			putchar(32);
		}
		r++;
	}

	putchar(10);

	return (0);
}
