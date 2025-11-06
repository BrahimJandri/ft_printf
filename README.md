# ft_printf

![42 School Project](https://img.shields.io/badge/42-School_Project-blue)
![Language: C](https://img.shields.io/badge/language-C-blue.svg)
![Norminette](https://img.shields.io/badge/norminette-passing-success)

A custom implementation of the C standard library's `printf` function, created as part of the 42 School curriculum.

## 📖 About

`ft_printf` is a project that recreates the behavior of the standard C library's `printf` function. This exercise is designed to help understand:
- **Variadic functions** in C
- **Format specifiers** and string parsing
- **Type conversions** and formatting
- **Well-structured and extensible code** design

This project is of moderate difficulty and provides a great opportunity to improve programming skills while discovering how one of C's most versatile functions works under the hood.

## 🚀 Features

This implementation supports the following conversion specifiers:

| Specifier | Description |
|-----------|-------------|
| `%c` | Print a single character |
| `%s` | Print a string |
| `%p` | Print a pointer address in hexadecimal |
| `%d` | Print a decimal (base 10) number |
| `%i` | Print an integer in base 10 |
| `%u` | Print an unsigned decimal number |
| `%x` | Print a number in hexadecimal (lowercase) |
| `%X` | Print a number in hexadecimal (uppercase) |
| `%%` | Print a percent sign |

## 🛠️ Installation

### Prerequisites
- GCC or any C compiler
- Make

### Build Instructions

1. Clone the repository:
```bash
git clone https://github.com/BrahimJandri/ft_printf.git
cd ft_printf
```

2. Compile the library:
```bash
make
```

This will generate the `libftprintf.a` static library.

3. Clean object files (optional):
```bash
make clean
```

4. Clean all generated files (optional):
```bash
make fclean
```

5. Recompile everything (optional):
```bash
make re
```

## 📝 Usage

### Basic Usage

1. Include the header in your C file:
```c
#include "ft_printf.h"
```

2. Compile your program with the library:
```bash
gcc -Wall -Wextra -Werror your_program.c libftprintf.a -o your_program
```

3. Use `ft_printf` just like the standard `printf`:
```c
ft_printf("Hello, %s!\n", "World");
```

### Examples

```c
#include "ft_printf.h"

int main(void)
{
    // Character
    ft_printf("Character: %c\n", 'A');
    
    // String
    ft_printf("String: %s\n", "Hello, 42!");
    
    // Integer
    ft_printf("Integer: %d\n", 42);
    
    // Unsigned
    ft_printf("Unsigned: %u\n", 123456);
    
    // Hexadecimal (lowercase)
    ft_printf("Hex (lower): %x\n", 255);
    
    // Hexadecimal (uppercase)
    ft_printf("Hex (upper): %X\n", 255);
    
    // Pointer
    int var = 42;
    ft_printf("Pointer: %p\n", &var);
    
    // Percent
    ft_printf("Percent: %%\n");
    
    return (0);
}
```

## 🏗️ Project Structure

```
ft_printf/
├── ft_printf.h           # Header file with function prototypes
├── ft_printf.c           # Main ft_printf function implementation
├── ft_printf_char.c      # Character conversion
├── ft_printf_str.c       # String conversion
├── ft_printf_int.c       # Integer conversion
├── ft_printf_unsigned.c  # Unsigned integer conversion
├── ft_printf_hexlow.c    # Lowercase hexadecimal conversion
├── ft_printf_hexupp.c    # Uppercase hexadecimal conversion
├── ft_printf_add.c       # Pointer address conversion
├── main.c                # Test file
└── Makefile             # Build configuration
```

## 🧪 Testing

A test file (`main.c`) is included with various test cases. To run the tests:

```bash
# Compile with main.c
gcc -Wall -Wextra -Werror main.c libftprintf.a -o test

# Run the tests
./test
```

The test file compares the output of `ft_printf` with the standard `printf` to ensure correctness.

## 📋 Function Prototypes

```c
int ft_printf(const char *format, ...);
```

**Returns:** The number of characters printed (excluding the null byte)

## 🔧 Implementation Details

- Uses **variadic functions** (`va_list`, `va_start`, `va_arg`, `va_end`)
- Parses format strings character by character
- Delegates to specialized functions for each conversion type
- Returns the total number of characters written
- Handles edge cases (NULL pointers, empty strings, etc.)

## 📚 Resources

- [printf man page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Variadic functions in C](https://en.cppreference.com/w/c/variadic)
- [42 School ft_printf subject](ft_printf.pdf)

## ⚖️ License

This project is part of the 42 School curriculum. Feel free to use and modify as needed for educational purposes.

## 👤 Author

**BrahimJandri**
- GitHub: [@BrahimJandri](https://github.com/BrahimJandri)

## 🙏 Acknowledgments

- 42 School for the project subject
- The C programming language documentation
- Fellow 42 students for peer learning

---

**Note:** This is a learning project and may not handle all edge cases that the standard `printf` does. It's designed to meet the requirements of the 42 School project specifications.
