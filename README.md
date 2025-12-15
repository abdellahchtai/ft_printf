# ft_printf

This project was developed as part of the **42 curriculum**.

Author: **abchtaib**

---

## 📌 Overview

`ft_printf` is a custom implementation of the standard C library function `printf`. The goal of this project is to reproduce the core behavior of `printf` while gaining a deeper understanding of **variadic functions**, **format parsing**, and **low-level output using the `write` system call**.

The function formats and prints output to the standard output according to a given format string and a variable number of arguments.

---

## 🎯 Objectives

* Reimplement the basic behavior of `printf`
* Learn how to use variadic arguments (`va_list`)
* Parse format strings correctly
* Handle multiple data types and conversion specifiers
* Respect memory safety and avoid leaks
* Use only authorized functions (notably `write`)

---

## ⚙️ Function Prototype

```c
int ft_printf(const char *format, ...);
```

### Return Value

* Returns the **number of characters printed**
* Returns `-1` in case of an error

---

## 🧠 Supported Conversion Specifiers

The following conversions are supported:

| Specifier | Description                            |
| --------- | -------------------------------------- |
| `%c`      | Print a single character               |
| `%s`      | Print a string                         |
| `%p`      | Print a pointer address in hexadecimal |
| `%d`      | Print a signed decimal integer         |
| `%i`      | Print a signed integer                 |
| `%u`      | Print an unsigned decimal integer      |
| `%x`      | Print a hexadecimal number (lowercase) |
| `%X`      | Print a hexadecimal number (uppercase) |
| `%%`      | Print a percent sign                   |

---

## 🛠️ Implementation Overview

1. **Format parsing**

   * Iterate through the format string character by character
   * When a `%` is encountered, determine the conversion specifier

2. **Variadic arguments handling**

   * Use `va_start`, `va_arg`, and `va_end` to retrieve arguments

3. **Dispatch system**

   * Each specifier is handled by a dedicated function
   * Output is written using the `write` system call

4. **Character count tracking**

   * Count every printed character
   * Return the total count at the end of the function

---

## 📦 Compilation Instructions

Compile the project into a static library:

```bash
gcc -Wall -Wextra -Werror -c ft_printf.c ft_printf_utils.c
ar rcs libftprintf.a ft_printf.o ft_printf_utils.o
```

Example usage in a program:

```bash
gcc main.c libftprintf.a -o printf_test
```

Run:

```bash
./printf_test
```

---

## 🧪 Testing

To verify correctness, compare the output and return value of `ft_printf` with the standard `printf`:

* Different data types
* Edge cases (NULL strings, zero values, limits)
* Mixed format strings

Memory correctness can be checked using tools such as AddressSanitizer or Valgrind.

---

## 🚫 Constraints & Rules

* The use of the standard `printf` is forbidden
* Only authorized functions may be used (mainly `write`)
* No global variables
* The function must be robust and leak-free

---

## 📚 References

* Linux manual pages: `man 3 printf`, `man 3 stdarg`
* GNU C Library documentation
* 42 Network official subject: **ft_printf**

These resources were used to understand variadic functions, format parsing, and output handling in C.

---

## ✅ Conclusion

The `ft_printf` project strengthens essential C programming skills, including:

* Variadic function handling
* String parsing
* Modular code design
* Low-level I/O using system calls

It serves as a strong foundation for more advanced projects within the 42 curriculum.
