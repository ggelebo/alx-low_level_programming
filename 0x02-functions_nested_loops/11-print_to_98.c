#include "main.h"

/**
* Print all natural numbers for n to 98
* followed by a new line
*/

void prinf_to_98(int n)
{
	int i, j;
	if (n <= 98)
	{
		for (i = n; i <= 98, i++)
		{
			if (i != 98)
				printf("%d ", i);
			else if (i ==98)
				printf ("%d\n", j);
		}
	}
}
