#include <stdio.h>

/**
 * main - print numbers less than 10
 *
 * description: print numbers
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a);
		a++;
	}

	putchar(10);

	return (0);
}
