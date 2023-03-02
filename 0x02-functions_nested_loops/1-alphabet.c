#include "main.h"

/**
* Print all alphabets in lowercase
*
*/

void print_alphabet(void) /*Function to print all alphabets in lowercase*/
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
