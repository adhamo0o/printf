#include <stdarg.h>
#include "main.h"

/**
 * handle_unsigned - Handles the %u format specifier
 * @args: The va_list argument containing the unsigned integer to print
 * @len: Pointer to the length counter
 *
 * Return: The updated length counter
 */
int handle_unsigned(va_list args, int *len)
{
	unsigned int num = va_arg(args, unsigned int);

	*len += print_unsign(num, 10, "0123456789");
	return (*len);
}
