#include "main.h"
#include <stdio.h>

/**
 * _isupper - function to check if character is uppercase
 *
 * @c:checks input of function
 *
 * Return: returns 1 if 'c' is uppercase
 * 	otherwise always 0 (success)
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 9'Z'))
	{
		return (1);
	}
	return(0);
}
