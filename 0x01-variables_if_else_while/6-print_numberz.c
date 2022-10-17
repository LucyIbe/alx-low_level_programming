#include <stdio.h>

/**
 *  main - prints interger from 0 t0 9 with just putchar
 *  Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
