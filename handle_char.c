#include <stdarg.h>
#include "main.h"

/**
 * handle_char - Handles the %c format specifier
 * @args: The va_list argument containing the character to print
 * @len: Pointer to the length counter
 *
 * Return: The updated length counter
 */
int handle_char(va_list args, int *len)
{
	int c = va_arg(args, int);

	*len += _putchar(c);
	return (*len);
}
