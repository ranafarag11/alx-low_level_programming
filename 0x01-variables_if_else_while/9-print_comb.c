#include <stdio.h>

/**
 * main - print single digit numbers
 *
 * description: print numbers
 *
 * return: always 0 (success)
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
