
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: number of command line arguments
 * @argv: array of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int result = 0, num, i, j;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	num = atoi(argv[i]);
	result += num;
	{
		printf("%d\n", result);
		return (0);
	}
}
