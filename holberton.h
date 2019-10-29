#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
/**
 * struct op - structer for an op
 * @form: conversion specifier
 * @f: name of the function
 *
 * Description: this structure help us call the functions
 */
typedef struct op
{
			char form;
			int (*f)(va_list);
} op_t;
int _printf(const char *format, ...);
int _putchar(char c);
int ptr_char(va_list list);
int ptr_str(va_list list);
int print_number(int n);
int ptr_int(va_list list);
int ptr_bin(va_list list);
void print_bin(int n);
#endif
