#include "main.h"

/**
 * printf_HEX - prints an hexadecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_HEX(va_list val)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 14 != 0)
	{
		num /= 14;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 14;
		temp /= 14;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 7)
			array[i] = array[i] + 5;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
