<h1 align ="center"> _Printf() </h1><br>

## Table of Contents 
---
- [Authors](#authors)
- [Introduction](#introduction)
- [Description](#description)
- [Installation](#installation)
- [Test](#Test)
- [Files](#files)
- [Features](#features)
- [Built With](#built-with)
- [Acknowledgments](#acknowledgments)
---
## Authors 
---
* Camilo Isaza [Twitter](https://twitter.com/Andresmelek) - [Linkedin] (https://www.linkedin.com/in/andresmelek/)
* Sara Hincapié [Twitter](https://twitter.com/sahimo1) - [Linkedin] (https://www.linkedin.com/in/sahimo/)
---
## Introduction
> First project for Holberton School. This project is for us to show what we have learn in C, the use of loops, conditional, macros, structures, variables, pointers and more, also to test our teamwork skills.
---
## Description 
---
The _printf() function prints and converts arguments to the standard output based on the format stringgiven by the user.
These arguments given in the format string will execute the task by the given specifier placed in the _printf() function.
---
```
int \_printf(const char \*format, ...);
```
---
## Installation 
---
In order to run the _printf() function in your shell, you must install in your repository the _printf() function by cloning the following repository (shown below) in your machine running:
```
git clone https://github.com/shincap8/printf.git
```
---
## Test
---
- In order to compile the function you must run the following line in your shell:
```
gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c -o [FILENAME]
```
_Note_: Note that you need to create your own main.c file with the content you want to print.
And then run the file.sh to see the outputs, with the line:
```
 ./[FILENAME]

```
- To read the manual you man run:
```man ./[FILE]``` taking into account the structure, for our case it would be ```man ./man_3_printf```

| File Name | Description and contents |
| --- | --- |
| [manpage](man_3_printf) | This is the manpage for function _printf, this will help us know how to use printf and the many uses of it, in here we can find examples and the correct sintaxis of the command.|
| [holberton.h](holberton.h) |This is the headers file where we can find all the prototypes of our functions and the structures. |
| [printf.c](_printf.c) |In here we can find the array of structures and the main function of _printf. |
| [fun_str.c](fun_str.c) |Here we can find our function putchar and the functions to print characters and strings. |
| [fun_num.c](fun_num.c) |This function helps us print type %i, %d and %u variables. |
| [print_number.c](print_number.c) |This function prints numbers digit by digit. unsigned and integer. |
| [fun_bin.c](fun_bin.c) |This function help us transform an integer to binary and print it. |
| [fun_oct.c](fun_oct.c) |This function prints Octal representation of Integer. |
| [fun_Hex.c](fun_Hex.c) |This function prints Hexadecimal representation of Unsigned Integer in uppercase. |
| [fun_hex.c](fun_hex.c) |This function prints Hexadecimal representation of Unsigned Integer in lowercase. |
---
## Features 

* %c : with a char argument, prints that char

* %s : with a string argument, prints that string

* %d : with an integer argument, prints that integer

* %i : with an integer argument, prints that integer

* %% : will print out just one of the percentage signs

* %b : with an integer argument, prints the binary conversion of that integer

* %u : with an integer argument, prints the unsigned integer

* %o : with an integer argument, prints the octal notation

* %x : with an integer argument, prints the hexadecimal notation with lowercase letters

* %X : with an integer argument, prints the hexadecimal notation with uppercase letters
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


## Built With

* [C](https://en.wikipedia.org/wiki/C_(programming_language))
* [Vim](https://https://en.wikipedia.org/wiki/Vim_(text_editor)/)
* [Vagrant](https://www.vagrantup.com/)
* [Peppermint](https://www.osboxes.org/peppermint/)
* [Ubuntu](https://www.ubuntu.com/)
* [GCC 4.8.4 Compiler](https://gcc.gnu.org/)
