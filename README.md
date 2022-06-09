# _Printf Function

### _printf

This is a customized version of the printf function from the standard C language library, which produces output in a formatted form, with some of the most important printf [man](https://man7.org/linux/man-pages/man3/printf.3.html) flags.

**Table of Contents**

- [Features](#features)
- [Usage](#usage)
- [Man](#man)
- [Flowchart](#flowchart)

## Features
### Requeriments
You should learn from this project:

- How to use git in a **team work**
- Applying *variadic functions* to a big project in C
- Understand the complexities of printf function

### Conversion specifiers
- ***%c***  : Type the format *c* to print a character.
- ***%s***  : Type the format *s* to print a string.
- ***%d***  : Type the format *d* to print an integer.
- ***%i***  : Type the format *i* to print an integer as well.

### How To Use

Use our _printf function with the format specifiers already mentioned, *examples* :

***Character*** : _printf("Character:[%c]\n", 'H');

***String***    : _printf("String:[%s]\n", "I am a string !");

***Integer d*** : _printf("Negative:[%d]\n", -762534);

***Integer i***   : _printf("Positive:[%i]\n", 2021);


### Output
```bash
Character:[H]
```
```bash
String:[I am a string !]
```
```bash
Negative:[-762534]
```
```bash
Positive:[2021]
```

## Usage
### Installation

Use [git](https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository) to clone this repository in your local machine

```bash
git clone https://github.com/Daniel13713/printf.git
```

### Compilation

All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```

### Examples

```c
import foobar

/* DataType char "%c"
 * print "g-i-t 20"
 */
_printf("%c-%c-%c\n", 'g', 'i', 't');

/* DataType char* "%s"
 * print "g-i-t 20"
 */
_printf("%s\n", "g-i-t 20");

/* DataType int "%d"
 * print "g-i-t 20"
 */
_printf("g-i-t %d\n", 20);
```
## Man
**Man Page** :books:
To see the *man page* of our **_printf** function use:

```bash
man ./man_3_printf
```

## Flowchart
![Diagram-printf](https://user-images.githubusercontent.com/90220978/141025365-34109753-6adf-4853-ab6c-ddf5575101eb.png)


## Authors :pen:
- [Shara García](https://www.linkedin.com/in/sharagb/)
- [Daniel Duarte](https://github.com/Daniel13713)
