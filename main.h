#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printc(va_list args);
int prints(va_list args);
int printper(va_list args);
int (*get_func(char x))(va_list);
typedef struct op
{
	    char *op;
	        int (*f)(va_list args);
} struc;

#endif /* MAIN_H */
