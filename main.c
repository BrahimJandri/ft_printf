#include "ft_printf.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	printf("----------------------- CHAR TESTS ----------------------------\n");

	ft_printf("TEST 1 : |%c|\n", '@');
	printf("TEST 1 : |%c|\n", '@');
	ft_printf("TEST 2 : |%c|\n", ' ');
    printf("TEST 2 : |%c|\n", ' ');
	ft_printf("TEST 3 : |%c|\n", 97);
	printf("TEST 3 : |%c|\n", 97);   
	ft_printf("TEST 4 : |%c|\n", '0');
    printf("TEST 4 : |%c|\n", '0');
	ft_printf("TEST 5 : |%c|\n", '0' + 256);
    printf("TEST 5 : |%c|\n", '0' + 256);
	ft_printf("TEST 6 : |%c|\n", '0' - 256);
    printf("TEST 6 : |%c|\n", '0' - 256);

	printf("----------------------- STR TESTS -----------------------------\n");

	ft_printf("TEST 1 : |%s|\n", "1337");
	printf("TEST 1 : |%s|\n", "1337");
	ft_printf("TEST 2 : |%s|\n", NULL);
    printf("TEST 2 : |%s|\n", NULL);
	ft_printf("TEST 3 : |%s|\n", "");
	printf("TEST 3 : |%s|\n", "");

	printf("------------------------ POINTERS -----------------------------\n");

	ft_printf("TEST 1 : |%p|\n", (void *) 'A');
	printf("TEST 1 : |%p|\n", (void *) 'A');
	ft_printf("TEST 2 : |%p|\n", 42);
	printf("TEST 2 : |%p|\n", (void *) 42);
	ft_printf("TEST 3 : |%p|\n", (void *) 0);
	printf("TEST 3 : |%p|\n", (void *) 0);
	ft_printf("TEST 4 : |%p|\n", NULL);
	printf("TEST 4 : |%p|\n", NULL);
	ft_printf("TEST 5 : |%p|\n", "HEY");
	printf("TEST 5 : |%p|\n", "HEY");
	printf("------------------------ PERCENT ------------------------------\n");
	ft_printf("SIMPLE TEST : |%%|\n");
	printf("SIMPLE TEST : |%%|\n");
	printf("------------------------ HEXADECIMALS -------------------------\n");
	ft_printf("TEST 1 : |%x|\n", 42);
	printf("TEST 1 : |%x|\n", 42);
	printf("|%.10d|\n", 42);
	ft_printf("|%.10d|\n", 42);
	return (EXIT_SUCCESS);
}