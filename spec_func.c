#include "main.h"
#include <stdarg.h>
int print_c(va_list args)
{
	    int c;
	        c = va_arg(args, int);
		    return (_putchar(c));
}

