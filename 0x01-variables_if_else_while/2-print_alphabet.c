#include <stdio.h>

/**
* main - function to print the letters of the alphabet
*
*Description:used putchar function to  print the letters of the alphabet
*according to ASCII 
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

}
