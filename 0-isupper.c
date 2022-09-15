#include "main.h"
/**
 * _isupper - checks if the letters are upper case
 * @c: input.
 *
 * Return: 1 if c is uppercase
 * 0 0therwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
