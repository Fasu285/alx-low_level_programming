#include <stdlib.h>
#include <stdio.h>

/**
 * main -> function that prints its name, followed by a new line
 * @argc: first paramater
 * @argv: an array of the value of argc
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
