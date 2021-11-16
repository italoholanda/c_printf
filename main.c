#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	printf("\n\n\n\n\n\n ================= TEST ================ \n\n");
	// Integer
	printf("\nINT \n---- \n");
	ft_printf("%i", -13);
	printf("\n----\n");
	printf("%d", -13);
	printf("\n\n");

	// Unsigned
	printf("\nUNINT \n---- \n");
	printf("\n");
	ft_printf("%u", -13);
	printf("\n----\n");
	printf("%u", -13);
	printf("\n\n");

	// Char
	printf("\nCHAR \n=== \n");
	printf("\n");
	ft_printf("%c", '%');
	printf("\n----\n");
	printf("%c", '%');
	printf("\n\n");

	// String
	printf("\nSTRING \n=== \n");
	printf("\n");
	ft_printf("%s", "Vai um café aí?");
	printf("\n----\n");
	printf("%s", "Vai um café aí?");
	printf("\n\n");

	printf("================= ==== ================ \n\n");
}