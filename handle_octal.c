#include <stdarg.h>
#include "main.h"

/**
 * handle_octal - Handles the %o format specifier
 * @args: The va_list argument containing the unsigned integer to print
 * @len: Pointer to the length counter
 *
 * Return: The updated length counter
 */
int handle_octal(va_list args, int *len)
{
	unsigned int num = va_arg(args, unsigned int);

	*len += print_unsign(num, 8, "01234567");
	return (*len);
}
