#include <stdio.h>

/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */

int main(void)
{
	char i = 'a';
	char o = 'A';

	while (i <= 'z')
	while (o <= 'Z')
	{
		putchar(i);
		i++;
		putchar(o);
		o++;
	}
	putchar('\n');
	return (0);
}
