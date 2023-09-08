#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * description: A C program that print with put function
 * Return: always 0
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 5)
                printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
        if (n < 6 && n != 0)
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
        if (n == 0)
                printf("Last digit of %d is %d and is zer\n", n, n % 10);
        return (0);
}
