#include "main.h"

/**
* Prints every minutes of the day of Jack Bauer
* Starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
	int i, j;
	i = 0;
	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_Putchar ((i/10) + '0');
			_Putchar ((i%10) + '0');
			_Putchar (':');
			_Putchar ((j/10) + '0');
			_Putchar ((j%10) + '0');
			_Putchar ('\n')
			j++;
		}
		j++;
	}
}
