#include <stdio.h>

/**
 * main - print letters of alphabet except e,q
 *
 * Description: print alphabet except e,q
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int s = 0;

	while (s < 48)
	{
		if (s < 10)
			putchar(s + '0');
		else if (s > 41)
			putchar(s - 10 + 'A');
		s++;
	}
	putchar(10);

	return (0);
}
