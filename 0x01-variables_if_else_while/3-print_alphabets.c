#include <stdio.h>


/**
 * main - print the letters of the alphabet upper and lower case
 *
 * Description:Function to print the letters of the alphabet upper and lower case  using putchar
 *
 * Return: 0
 */

int main(void)
{
	       int x = 97;
	       int y = 65;

        while (x < 123)
        {
                putchar(x);
                x++;
        }
	while (y < 91)
	{
		putchar(y);
		y++;
	}	
        putchar(10);

        return (0);
}
