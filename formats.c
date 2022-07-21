#include "main.h"

/**
 *s_fun - it prints the lenght of a string
 *@pmt: argument
 *Return: i
 */
int s_fun(va_list pmt)
{
	int i;

	char *s = va_arg(pmt, char *);

	if (!s)
		s = "(null)";

	for (i = 0; s[i]; i++)
		_putchar(i);

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

	return (c);
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
