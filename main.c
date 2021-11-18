#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("\n\n\n\n\n\n ================= TEST ================ \n\n");
	// Integer
	printf("\nINT \n=== \n");
	ft_printf("LIBFT: %i", -13);
	printf("\n----\n");
	printf("STDIO: %d", -13);
	printf("\n\n");

	// Unsigned
	printf("\nUNINT \n=== \n");
	ft_printf("LIBFT: %u", -785);
	printf("\n----\n");
	printf("STDIO: %u", -785);
	printf("\n\n");

	// Char
	printf("\nCHAR \n=== \n");
	ft_printf("LIBFT: %c", '%');
	printf("\n----\n");
	printf("STDIO: %c", '%');
	printf("\n\n");

	// String
	printf("\nSTRING \n=== \n");
	ft_printf("LIBFT: %s", "Vai um café aí?");
	printf("\n----\n");
	printf("STDIO: %s", "Vai um café aí?");
	printf("\n\n");

	// Ponter
	char *c = malloc(1);
	printf("\nPOINTER \n=== \n");
	ft_printf("LIBFT: %p", &c);
	printf("\n----\n");
	printf("STDIO: %p", &c);
	printf("\n\n");

	// UPPERCASE X
	int X = 0x86;
	printf("\nUPPERCASE X \n=== \n");
	ft_printf("LIBFT: %X", X);
	printf("\n----\n");
	printf("STDIO: %X", X);
	printf("\n\n");

	// lowercase x
	char x = 0x86;
	printf("\nlowercase x \n=== \n");
	ft_printf("LIBFT: %x", x);
	printf("\n----\n");
	printf("STDIO: %x", x);
	printf("\n\n");


	printf("================= ==== ================ \n\n");
}
