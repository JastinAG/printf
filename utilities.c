#include "main.h"

/**
 * print_number - prints out an integer
 * @n: the integer to be printed
 *
 * Return: 0
 */

int print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');

	return (0);
}

/**
 * print_string - prints a string
 * @y: the string to be printed
 *
 * Return: 0
 */

int print_string(char *y)
{
	int len = strlen(y);
	int i = 0;

	while (i < len)
	{
		_putchar(y[i]);
		i++;
	}
	return (0);
}
