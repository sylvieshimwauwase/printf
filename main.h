#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct type - conversion specifiers
 * @print: pointer to print
 * @identifier: conversion specifier
 */
typedef struct type
{
	char *identifier;
	int (*print)(va_list);
} type_t;

int _printf(const char *format, ...);
int (*get_func(const char *specifier))(va_list);
int _putchar(char c);
int print_c(va_list args);
int print_s(va_list args);
int print_o(va_list args);
int print_d(va_list args);
int print_b(va_list args);
int print_x(va_list args);
int print_X(va_list args);
int print_p(va_list args);
int print_u(va_list args);
int print_F(va_list args);
int countOctal(unsigned int num);
int countDigits(unsigned int num);
int countBinary(unsigned int num);
int print_number(unsigned int n);
int rot13(va_list args);
int print_rev(va_list args);
int _strlen(char *);
void print_lowerHex(unsigned int num, int *count);
void print_upperHex(unsigned int num, int *count);
void print_pointer(unsigned long ptr, int *count);

#endif
