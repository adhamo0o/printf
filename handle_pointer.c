#include <stdarg.h>
#include "main.h"

/**
 * handle_pointer - Handles the %p format specifier
 * @args: The va_list argument containing the pointer to print
 * @len: Pointer to the length counter
 *
 * Return: The updated length counter
 */
int handle_pointer(va_list args, int *len)
{
	void *ptr = va_arg(args, void *);

	*len += _putchar('0');
	*len += _putchar('x');
	*len += print_unsign((unsigned long)ptr, 16, "0123456789abcdef");
	return (*len);
}
