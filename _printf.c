#include "main.h"
/**
 *_printf - function that produces output according to a format
 *Return: number of characters printed
 *@format:format
 */
int _printf(const char *format, ...)
{
	va_list pmt;
	unsigned int iterator = 0, counter = 0;
	int (*f)(va_list);

	if (!format)
		return (-1);
	va_start(pmt, format);
	while (format[iterator])
	{
		for (; format[iterator] != '%' && format[iterator]; iterator++)
		{
			_putchar(format[iterator]);
			counter++;
		}
		if (!format[iterator])
			return (counter);
		f = get_fmt_fun(&format[iterator + 1]);
		if (f != NULL)
		{
			counter = counter + f(pmt);
			iterator = iterator + 2;
			continue;
		}
		if (!format[iterator + 1])
			return (-1);
		_putchar(format[iterator]);
		counter++;
		if (format[iterator + 1] == '%')
		{
			_putchar('%');
			iterator = iterator + 2;
		}
		else
			iterator++;
	}
	va_end(pmt);
	return (counter);
}
