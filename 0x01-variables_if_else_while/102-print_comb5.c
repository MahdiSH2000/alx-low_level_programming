#include <stdio.h>
/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */
int main(void)
{
	int i = 0, o;

	while (i <= 99)
	{
		o = i;
		while (o <= 99)
		{
			if (i != o)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((o / 10) + 48);
				putchar((o % 10) + 48);

				if (i + o != 98 || o != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			o++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
