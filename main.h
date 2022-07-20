#ifndef MAIN.H
#define MAIN.H

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 *struct op - struct to find the format
 *@ft - format
 *@f - function it points to
 */

typedef struct format
{
	char *ft;
	int (*f)(int a, int b);

} fr_t;

int _printf(const char *format, ...);

#endif
