#include <main.h>
/**
 *
 *
 */
int (*get_fmt_fun(char *format))(va_list);
{
	frt format_type[] = {
		{"c", c_fun},
		{"d", d_fun},
		{"s", s_fun},
		{"i", i_fun},
		{"%", p_fun},
		{"b", b_fun},
		{NULL, NULL}};

	int iterator = 0;

	while (format_type[iterator].ft != NULL)
	{
		if (*(format_type[iterator].ft) == format[0])
			return (format_type[iterator].f);

		iterator++;
	}
	return (NULL);
}
