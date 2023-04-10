#include <stdio.h>
#include <stdlib.h>

/**
 * main -> function minimum number of coins tomake change for amount of money
 * @argc: is integer first paramater
 * @argv: an array of the value of argc
 * Return: returns 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int num, i, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			num -= coins[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
