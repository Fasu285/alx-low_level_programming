#include "main.h"

/**
 *  _strlen_recursion - Returns the length of a string.
 * @s: Pointer to string
 * Return: returns void
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
