#include "main.h"

/**
 * _printf - displays the formatted string
 * @format: the string to be formatted
 *
 * Return: strings length
 */

int _printf(const char *format, ...)
{
	int len;

	va_list list;
	va_start(list, format);
	len = vfprintf(stdout, format, list);
	va_end(list);

	return (len);
}
