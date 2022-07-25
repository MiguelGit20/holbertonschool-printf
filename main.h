#ifndef MAIN_H
#define MAIN_H

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
/**
 *struct format - struct to find the format
 *@ft: format
 *@f: function it points to
 */
typedef struct format
{
	char *ft;
	int (*f)(va_list);

} fr_t;

int (*get_fmt_fun(const char *format))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int c_fun(va_list pmt);
int s_fun(va_list pmt);
int p_fun(va_list pmt);
int d_fun(va_list pmt);

#endif /* MAIN_H*/
