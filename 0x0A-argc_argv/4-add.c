#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry Point.
 *
 * Description: adds positive numbers.
 *
 * @argc: number of args
 * @argv: an array of args
 *
 * Return: 0 if success otherwise 1
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
