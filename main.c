#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
	printf("\n\n\n\n\n\n");

	printf("%i\n", ft_printf(" %x \n", LONG_MIN));
	printf("%i\n", printf(" %lx \n", LONG_MIN));
	printf("\n");

	printf("%i\n", ft_printf(" %x \n", LONG_MIN));
	printf("%i\n", printf(" %lx \n", LONG_MIN));
	printf("\n");

	printf("%i\n", ft_printf(" %x \n", LONG_MIN));
	printf("%i\n", printf(" %lx \n", LONG_MIN));

	printf("\n\n\n\n\n\n");
}
