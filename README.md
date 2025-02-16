# ft_printf  
[42 Cursus] This project involves reprogramming the `printf` function in C. The goal is to understand variadic functions and string formatting while creating a lightweight version of the standard `printf` function. Key features include handling various format specifiers and managing memory efficiently.  

Keywords  
- **Variadic Functions**  
- **String Formatting**  
- **Memory Management**  
- **Unix Logic**  
- **Rigor**  
- **Algorithms**  

---

## Overview  
The `ft_printf` project is a recreation of the standard C library function `printf`. It was created to deepen understanding of variadic functions, string manipulation, and memory management. The project focuses on implementing core functionalities of `printf`, such as handling format specifiers like `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`. The unique aspect of this project is its emphasis on creating a well-structured and extensible codebase that can be integrated into future projects.

---

## Mandatory Features  
- **%c**: Prints a single character.  
- **%s**: Prints a string.  
- **%p**: Prints a pointer address in hexadecimal format.  
- **%d**: Prints a decimal (base 10) number.  
- **%i**: Prints an integer in base 10.  
- **%u**: Prints an unsigned decimal (base 10) number.  
- **%x**: Prints a hexadecimal number (base 16) in lowercase.  
- **%X**: Prints a hexadecimal number (base 16) in uppercase.  
- **%%**: Prints a percent sign.  

## Bonus Features (not implemented)  
The following bonus features were not implemented in this project but are part of the extended requirements for `ft_printf`:  

- **Flag Management**: Handling flags like `-`, `0`, `.`, and minimum field width for all conversions.  
- **Additional Flags**: Support for `#`, `+`, and space flags to modify the output format (e.g., `#x` for hexadecimal with `0x` prefix).  
- **Precision and Padding**: Managing precision for numbers and strings, as well as padding with spaces or zeros.  

---

## How to Use  
### Requirements  
- CC compiler  
- Make  

1. Clone this repository:  
   ```bash  
   git clone [repository-url]  
   cd ft_printf  
   ```  
2. Compile the project:  
   ```bash  
   make  
   ```  
3. Use the `ft_printf` function in your code by including the header file at the top of the C File:  
   ```c  
   #include "ft_printf.h"  
   ```  
4. Make a program (with a main) to test the C Function ft_printf

### Example Usage  

| **Input Command**                                      | **Description**                                                                 | **Expected Output**                                                                 |
|--------------------------------------------------------|---------------------------------------------------------------------------------|-------------------------------------------------------------------------------------|
| `ft_printf("Hello, %s!", "world")`                     | Prints a string.                                                                | `Hello, world!`                                                                    |
| `ft_printf("Pointer: %p", &variable)`                  | Prints a pointer address.                                                      | `Pointer: 0x7ffee4b5c8d0`                                                         |
| `ft_printf("Number: %d", 42)`                          | Prints a decimal number.                                                       | `Number: 42`                                                                       |
| `ft_printf("Hex: %x", 255)`                            | Prints a hexadecimal number in lowercase.                                      | `Hex: ff`                                                                          |
| `ft_printf("Percent sign: %%")`                        | Prints a percent sign.                                                         | `Percent sign: %`                                                                  |

### Error Handling  

| **Input Command**                                      | **Description**                                                                 | **Expected Output**                                                                 |
|--------------------------------------------------------|---------------------------------------------------------------------------------|-------------------------------------------------------------------------------------|
| `ft_printf("%z", 42)`                                 | Invalid format specifier.                                                       | No output or undefined behavior (depends on implementation).                       |
| `ft_printf(NULL)`                                     | Passing a NULL format string.                                                   | Should handle without crashing.                                  |
| `ft_printf("%")`                                      | Incomplete format specifier.                                                    | Should return an error or handle gracefully.                      |
| `ft_printf("%d", 2147483648)`                       | Width or precision overflow (integer limit exceeded).                           | Should handle overflow or return an error.                        |
| `ft_printf("%s", NULL)`                               | NULL string passed as argument.                                                 | Should print `(null)` or handle it properly.                      |
| `ft_printf("%p", NULL)`                               | NULL pointer passed as argument.                                                | Should print `(nill)` or handle it properly.                      |
| `ft_printf("%c", 300)`                                | Out-of-range character value for `%c`.                                          | Should handle non-ASCII or return error.                          |
| `ft_printf("%d", "string")`                           | Incorrect argument type for `%d`.                                               | Undefined behavior or possible crash.                             |
| `ft_printf("%10$d", 42)`                              | Incorrect position specifier.                                                   | Undefined behavior or controlled output (look at bonus)          |
| `ft_printf("%-010d", 42)`                             | Conflicting flags (`0` and `-` used together).                                  | Should prioritize one or handle conflicts (look at bonus         |
| `ft_printf("%.*d", -5, 42)`                           | Precision as a negative value.                                                  | Undefined behavior or handle negative precision (look at bonus)  |

---

## What I Learned  
- **Variadic Functions**: Learned how to handle a variable number of arguments using `va_start`, `va_arg`, and `va_end`.  
- **String Formatting**: Gained a deeper understanding of how format specifiers work and how to implement them.  
- **Memory Management**: Improved skills in managing dynamic memory allocation and avoiding leaks.  
- **Rigor**: Developed a disciplined approach to coding, ensuring adherence to strict standards and error-free execution.  

---

## Author  
- **Name**: Oliver King Zamora
- **GitHub**: [oliverkingz](https://github.com/oliverkingz)
- **42 Login**: ozamora-

---

## Acknowledgments  
This project is part of the **42 Cursus**, a rigorous programming curriculum that emphasizes hands-on learning and problem-solving. Special thanks to the 42 team for providing this challenging and rewarding project!  

---
