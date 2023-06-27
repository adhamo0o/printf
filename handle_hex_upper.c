#include <stdarg.h>
#include "main.h"

/**
 * handle_hex_upper - Handles the %X format specifier
 * @args: The va_list argument containing the unsigned integer to print
 * @len: Pointer to the length counter
 *
 * Return: The updated length counter
 */
int handle_hex_upper(va_list args, int *len)
{
	unsigned int num = va_arg(args, unsigned int);

	*len += print_unsign(num, 16, "0123456789ABCDEF");
	return (*len);
}
