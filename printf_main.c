#include <stdarg.h>
#include "main.h"
/**
 * _printf - Prints formatted output to stdout
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;
	const char *p = format;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	while (*p != '\0')
	{
		if (*p == '%')
		{
			switch (*(++p))
			{
				case 'c':
					handle_char(args, &len);
					break;
				case 's':
					handle_string(args, &len);
					break;
				case '%':
					len += _putchar('%');
					break;
				case 'd':
				case 'i':
					handle_decimal(args, &len);
					break;
				case 'u':
					handle_unsigned(args, &len);
					break;
				case 'o':
					handle_octal(args, &len);
					break;
				case 'x':
					handle_hex(args, &len);
					break;
				case 'X':
					handle_hex_upper(args, &len);
					break;
				case 'p':
					handle_pointer(args, &len);
					break;
				default:
					len += _putchar('%');
					len += _putchar(*p);
					break;
			}
		}
		else
		{
			len += _putchar(*p);
		}
		p++;
	}

	va_end(args);
	return (len);
}
