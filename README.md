# 0x11. C - printf

## Description

> First project for Holberton School. This project is for us to show what we have learn in C, the use of loops, conditional, macros, structures, variables, pointers and more, also to test our teamwork skills.
---
| File Name | Description and contents |
| --- | --- |
| [manpage](man_3_printf) manpage of or function printf, this will help us know how to use printf and the many uses of it, in here we can find examples and the correct sintaxis of the command.|
| [holberton.h](holberton.h) |This is the headers file where we can find all the prototypes of our functions and the structures. |
| [printf.c](_printf.c) |In here we can find the array of structures and the main function of printf. |
| [fun_str.c](fun_str.c) |Here we can find our function putchar and the functions to print characters and strings. |
| [fun_num.c](fun_num.c) |This function helps us print type %i, %d and %u variables. |
| [print_number.c](print_number.c) |This function prints numbers digit by digit. unsigned and integer. |
| [fun_bin.c](fun_bin.c) |This function help us transform an integer to binary and print it. |
| [fun_oct.c](fun_oct.c) |This function prints Octal representation of Integer. |
| [fun_Hex.c](fun_Hex.c) |This function prints Hexadecimal representation of Unsigned Integer in uppercase. |
| [fun_hex.c](fun_hex.c) |This function prints Hexadecimal representation of Unsigned Integer in lowercase. |
---
### Examples of use

Below you can find use of come flags.

```
_printf("Unsigned:[%u]\n", 2147483647);
_printf("Negative:[%d]\n", -762534);
_printf("Character:[%c]\n", 'H');
_printf("Binary:[%b]\n", 685947);
```
Here are the result of this actions:

```
Unsigned:[2147483647]
Negative:[-762534]
Character:[H]
Binary:[10100111011101111011]
```
