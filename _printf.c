#include "main.h"
/**
 *
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list pmt;
	unsigned int iterator = 0, counter = 0;
	int (*f)(va_list);

	if (!format)
		return (-1);

	va_start(pmt, format);

	for (; format[iterator]; iterator++)
	{
		if (format[iterator] != '%')
		{
			_putchar(format[iterator]);
			counter++;
			iterator++;
		}
		else
		{
			if (format[iterator + 1] == '%')
			{
				_putchar('%');
				counter++;
				iterator += 2;
				continue;
			}
			else 
			{
				f = get_fmt_fun(&format[iterator + 1]);
				if (f == NULL)
					return (-1);
				iterator += 2;
				counter += f(pmt);
				continue;
			}
		}
	}
	va_end(pmt);
	return (counter);
}
