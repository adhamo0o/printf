#include <stdarg.h>
#include "main.h"

/**
 * print_unsign - Prints an unsigned integer of a given base
 * @num: The unsigned integer to print
 * @base: The base of the number to print
 * @digits: The characters representing the digits in the given base
 *
 * Return: The number of characters printed
 */
int print_unsign(unsigned int num, int base, const char *digits)
{
	char buffer[32];
	int length = 0;
	int index = sizeof(buffer) - 1;
	int i;

	if (num == 0)
	{
		buffer[index--] = '0';
		length++;
	}

	while (num > 0)
	{
		buffer[index--] = digits[num % base];
		num /= base;
		length++;
	}

	for (i = index + 1; i < (int)sizeof(buffer); i++)
	{
		_putchar(buffer[i]);
	}

	return (length);
}
