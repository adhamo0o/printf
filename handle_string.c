#include <stdarg.h>
#include "main.h"

/**
 * handle_string - Handles the %s format specifier
 * @args: The va_list argument containing the string to print
 * @len: Pointer to the length counter
 *
 * Return: The updated length counter
 */
int handle_string(va_list args, int *len)
{
	const char *str = va_arg(args, const char *);

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		*len += _putchar(*str++);
	}
	return (*len);
}
