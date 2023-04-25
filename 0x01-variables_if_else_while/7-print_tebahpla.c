#include <stdio.h>

/**
 * main - prints akpha in reverse
 *
 * description: prints alpha in reverse
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int z = 122;

		while (z > 96)
		{
			putchar(z);
			z++;
		}

	putchar(10);

	return(0);
}

