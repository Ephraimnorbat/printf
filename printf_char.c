#include "main.h"

/**
 * printf_char - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char n;

	n = va_arg(val, int);
	_putchar(n);
	return (1);
}
