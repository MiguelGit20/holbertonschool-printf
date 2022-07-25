#include "main.h"
/**
 *s_fun - it prints the lenght of a string
 *@pmt: argument
 *Return: i
 */
int s_fun(va_list pmt)
{
	int i = 0;

	char *s = va_arg(pmt, char *);

	if (!s)
		s = "(null)";

	while (s[i])
		_putchar(s[i++]);

	return (i);
}

/**
 *c_fun - it prints a character
 *@pmt: argument
 *Return: c
 */
int c_fun(va_list pmt)
{
	char c;

	c = va_arg(pmt, int);
	_putchar(c);

	return (1);
}

/**
 *p_fun - it prints a perecentage
 *@pmt: argument
 *Return: 0
 */
int p_fun(va_list pmt)
{
	(void)pmt;
	return (write(1, "%", 1));
}

/**
 *d_fun - it prints an integer
 *@pmt: argument
 *Return: len
 */
int d_fun(va_list pmt)
{
	int n = va_arg(pmt, int);
	int d, len;
	unsigned int num;

	d = 1;
	len = 0;
	num = n;

	if (n < 0)
	{
		_putchar('-');
		len++;
		num = -n;
	}

	while (num / d > 9)
		d = d * 10;

	while (d != 0)
	{
		_putchar('0' + num / d);
		len++;
		num = num % d;
		d = d / 10;
	}
	return (len);

}
