#include <stdio.h>

/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	char o = 'A';

	while (o <= 'Z')
	{
		putchar(o);
		o++;
	}
	putchar('\n');
	return (0);
}
