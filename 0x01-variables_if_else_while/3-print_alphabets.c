#include <stdio.h>



/**
 * main - Entry Point
 *
 * Description:Function to print the alphabet
 *
 * Return: 0
 */

int main(void)
{
	int x = 97;
	int y = 65;

	while(x < 123)
	{
                putchar(x);
                x++;
        
	}

	while(y < 91)
	{
		putchar(y);
		y++;
	
	}	

        putchar(10);

        
	return (0);
}
