#include "main.h"
/**
 * print_alphabet_x10 - fonction
 * print_alphabet_x10: fonction that print alphabets in lower case
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
