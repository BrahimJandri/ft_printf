
# ft_printf

A custom implementation of the C standard library's `printf` function. This project is part of the 42 School curriculum and demonstrates proficiency in variadic functions, string manipulation, and type conversion in C.

## 📝 Description

`ft_printf` is a recreation of the famous `printf` function from the C standard library. This implementation handles various format specifiers and provides output functionality similar to the original `printf`. The project emphasizes understanding variadic functions, memory management, and creating well-structured, extensible code.

## ✨ Features

### Supported Format Specifiers

| Specifier | Description | Example |
|-----------|-------------|---------|
| `%c` | Character | `ft_printf("%c", 'A')` → `A` |
| `%s` | String | `ft_printf("%s", "Hello")` → `Hello` |
| `%d` | Signed decimal integer | `ft_printf("%d", 42)` → `42` |
| `%i` | Signed integer (same as %d) | `ft_printf("%i", -42)` → `-42` |
| `%u` | Unsigned decimal integer | `ft_printf("%u", 42u)` → `42` |
| `%x` | Lowercase hexadecimal | `ft_printf("%x", 255)` → `ff` |
| `%X` | Uppercase hexadecimal | `ft_printf("%X", 255)` → `FF` |
| `%p` | Pointer address | `ft_printf("%p", ptr)` → `0x7fff5fbff710` |
| `%%` | Literal percent sign | `ft_printf("%%")` → `%` |

### Special Behaviors

- **Null string handling**: `%s` with `NULL` pointer prints `(null)`
- **Null pointer handling**: `%p` with `NULL` pointer prints `(nil)`
- **Return value**: Returns the number of characters printed (like standard `printf`)

## 🚀 Installation

### Prerequisites

- GCC or any C compiler supporting C99
- Make utility
- Unix-like operating system (Linux, macOS)

### Building the Library

1. Clone the repository:
```bash
git clone https://github.com/BrahimJandri/ft_printf.git
cd ft_printf
```

2. Compile the library:
```bash
make
```

This creates `libftprintf.a`, a static library containing all the ft_printf functions.

### Clean Build Files

```bash
make clean      # Remove object files
make fclean     # Remove object files and library
make re         # Rebuild everything
```

## 📖 Usage

### Basic Usage

1. Include the header in your C file:
```c
#include "ft_printf.h"
```

2. Compile your program with the library:
```bash
gcc your_program.c -L. -lftprintf -o your_program
```

3. Use `ft_printf` just like the standard `printf`:
```c
#include "ft_printf.h"

int main() {
    ft_printf("Hello, %s!\n", "World");
    ft_printf("Number: %d, Hex: %x\n", 42, 42);
    ft_printf("Character: %c, Percent: %%\n", 'A');
    return 0;
}
```

### Example Output

```
Hello, World!
Number: 42, Hex: 2a
Character: A, Percent: %
```

## 🔧 API Reference

### Main Function

```c
int ft_printf(const char *format, ...);
```

**Parameters:**
- `format`: Format string containing text and format specifiers
- `...`: Variable number of arguments corresponding to format specifiers

**Returns:**
- Number of characters printed on success
- -1 on error (invalid format string)

### Helper Functions

All helper functions are declared in `ft_printf.h` but are primarily for internal use:

- `ft_printf_char(int c)` - Print a single character
- `ft_printf_str(char *str)` - Print a string
- `ft_printf_int(int n)` - Print a signed integer
- `ft_printf_unsigned(unsigned int n)` - Print an unsigned integer
- `ft_printf_hexlow(unsigned int n)` - Print lowercase hexadecimal
- `ft_printf_hexupp(unsigned int n)` - Print uppercase hexadecimal
- `ft_printf_add(void *ptr)` - Print a pointer address

## 📁 Project Structure

```
ft_printf/
├── Makefile              # Build configuration
├── README.md             # This file
├── ft_printf.h           # Header file with function declarations
├── ft_printf.c           # Main ft_printf function and format dispatcher
├── ft_printf_char.c      # Character printing (%c)
├── ft_printf_str.c       # String printing (%s)
├── ft_printf_int.c       # Integer printing (%d, %i)
├── ft_printf_unsigned.c  # Unsigned integer printing (%u)
├── ft_printf_hexlow.c    # Lowercase hex printing (%x)
├── ft_printf_hexupp.c    # Uppercase hex printing (%X)
├── ft_printf_add.c       # Pointer address printing (%p)
├── main.c                # Test file with various test cases
├── ft_printf.pdf         # Project subject (42 School)
└── ft_printf.png         # Project illustration
```

## 🧪 Testing

The project includes a comprehensive test file (`main.c`) that validates all format specifiers against the standard `printf` function.

### Running Tests

```bash
# Build the library first
make

# Compile and run the test program
gcc main.c -L. -lftprintf -o test_printf && ./test_printf
```

### Test Categories

The test suite covers:
- Character tests (`%c`)
- String tests (`%s`) including NULL handling
- Integer tests (`%d`, `%i`) including negative numbers
- Unsigned integer tests (`%u`)
- Hexadecimal tests (`%x`, `%X`)
- Pointer tests (`%p`) including NULL pointers
- Percent sign tests (`%%`)

## 🎯 Learning Objectives

This project helps understand:

- **Variadic Functions**: Using `va_list`, `va_start`, `va_arg`, and `va_end`
- **Function Pointers**: Dispatching format specifiers to appropriate handlers
- **String Manipulation**: Building formatted output character by character
- **Type Conversion**: Converting numbers to different representations (decimal, hex)
- **Memory Management**: Careful handling of pointers and addresses
- **Modular Programming**: Well-structured, extensible code architecture

## 👤 Author

**Brahim Jandri**
- GitHub: [@BrahimJandri](https://github.com/BrahimJandri)

## 📄 License

This project is part of the 42 School curriculum. Feel free to use it for learning purposes.

---

*This project was completed as part of the 42 School Common Core curriculum.*
