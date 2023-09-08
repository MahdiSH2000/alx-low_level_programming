#include <stdio.h>

/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */

int main(void)
{
	char m;

	for (m = 'a' ; m <= 'z' ; m++)
	{
	putchar(m);
	putchar('\n');
	return (0);
	}
}
