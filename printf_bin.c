#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: arguments.
 * Return: 1.
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i, c = 1, d;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int x;

	for (i = 0; i < 32; i++)
	{
		x = ((c << (31 - i)) & num);
		if (x >> (31 - i))
			flag = 1;
		if (flag)
		{
			d = x >> (31 - i);
			_putchar(d + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
