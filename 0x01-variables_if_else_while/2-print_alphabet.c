#include <stdio.h>


/**
 * main - print the letters of the alphabet
 *
 * Description:Function to print the letters of the alphabe using putchar
 *
 * Return: 0
 */

int main(void)
{
	int a = 97;

	while (a < 123)
	{
		putchar(a);
		a++;
	}
	putchar(10);

	return (0);
}
