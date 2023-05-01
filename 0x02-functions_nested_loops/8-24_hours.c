#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: jack_bauer prints every minute of the day
 *
 *not return
 */
void jack_bauer(void)
{
	int ho;
	int oh;
	int mo;
	int om;

	for (ho = 0; ho <= 2; ho++)
	{
		for (oh = 0; oh <= 9; oh++)
		{
			if (ho == 2 && oh == 4)
				break;
			for (mo = 0; mo <= 5; mo++)
			{
				for (om = 0; om <= 9; om++)
				{
					_putchar (ho + '0');
					_putchar (oh + '0');
					_putchar (':');
					_putchar (mo + '0');
					_putchar (om + '0');
					_putchar ('\n');
				}
			}
		}
	}
}
