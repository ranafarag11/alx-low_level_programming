#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * description: print single digit numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a = 48;

	while (a < 58)
	{
		putchar(a);
		a++;
	}

	putchar(10);

	return (0);
}
