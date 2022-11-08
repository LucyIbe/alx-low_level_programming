#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: the count of the arguments passed
 * @argv: the array of the arguments passed
 * Return: 0 (Always)
 */
int main(int argc, char *argv[])
{
		int i, sum;

		i = 1;
		sum = 0;
		if (argc < 3)
		{
			printf("%d\n", 0);
			return (0);
		}

		while (i < argc)
		{
			int j;

			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
						return (1);
				}
			}
			sum = sum + atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
		return (sum);
}
