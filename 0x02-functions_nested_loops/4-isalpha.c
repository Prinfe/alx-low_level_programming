#include "main.h"
/**
 * _isalpha(int c) - function to check if c is a letter, lowercase or uppercase
 * @c: this is the arg for the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}

