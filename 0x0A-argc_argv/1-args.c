#include <stdio.h>

/**
 * main -> function that prints the number of arguments passed into it
 * @argc: is integer first paramater
 * @argv: an array of the value of argc
 * Return: returns 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

