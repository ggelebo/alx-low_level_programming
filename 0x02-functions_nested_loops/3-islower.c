#include "main.h"

/**
* Check if a character is lowercase
*
*/

int _islower(int c)
{
	if (c >= 'a' && c <='z')
		return (1);
	else
		return (0);
}
