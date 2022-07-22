#include "main.h"
/**
 *
 *
 */
int (*get_fmt_fun(const char *format))(va_list)
{
	fr_t format_type[] = {
		{"c", c_fun},
		{"s", s_fun},
		{"%", p_fun},
		{"d", d_fun},
		{"i", d_fun},
		{NULL, NULL}
	};

	int iterator = 0;

	for (;format_type[iterator].ft != NULL; iterator++)
	{
		if (*(format_type[iterator].ft) == *format)
			break;
	}
	return (format_type[iterator].f);

}
