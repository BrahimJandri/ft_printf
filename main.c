#include "ft_printf.h"

int main() {
    int x = 42; 
    int a = ft_printf("\ninteger = %d \nstring = %s \nchar = %c \npointer = %p\n", -0122423562, "hello", 'c', (void *)&x);
    int b = printf("\ninteger = %d \nstring = %s \nchar = %c \npointer = %p\n", -0122423562, "hello", 'c', (void *)&x);

    // int a = ft_printf("%%%%%%\n", 'c');
    // int b = printf("%%%%%%\n", 'c');

    printf("\nMy ft_printf: %d\nTheir printf: %d\n", a, b);
    
    return 0;
}
