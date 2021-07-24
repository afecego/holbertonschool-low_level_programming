#ifndef FUNCTIONS_VARIADICS_H
#define FUNCTIONS_VARIADICS_H
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
typedef struct impre
{
char *t;
void (*f)(va_list);

}impresion;
void print_char(va_list c);
void print_int(va_list i);
void print_float(va_list f);
void print_string(va_list s);

#endif
