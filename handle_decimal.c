#include <stdarg.h>
#include "main.h"

/**
 * handle_decimal - Handles the %d and %i format specifiers
 * @args: The va_list argument containing the integer to print
 * @len: Pointer to the length counter
 *
 * Return: The updated length counter
 */
int handle_decimal(va_list args, int *len)
{
	int num = va_arg(args, int);

	if (num < 0)
	{
		*len += _putchar('-');
		num = -num;
	}
	*len += print_unsign(num, 10, "0123456789");
	return (*len);
}
