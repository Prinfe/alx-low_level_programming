#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: the int that will use as the argument of the function
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
		_putchar('0');
		return (0);
}
