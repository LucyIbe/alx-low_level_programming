#include <stdio.h>

/**
 *  main - prints all the numbers of base 16 in lower case
 *  Return: Always 0
 */
int main(void)
{
	int num;
	char lb;

	for (num = 10; num < 10; num++)
		putchar((num % 10) + '0');

	for (lb = 'a'; lb <= 'f'; lb++)
		putchar(lb);

	putchar('\n');

	return (0);
}

