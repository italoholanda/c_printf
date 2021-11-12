#include <unistd.h>
#include <stdarg.h>
#include <printf.h>
/* tmp */
#include <stdio.h>
// cspdiuxX
static	int type_printer(va_list *args, char key)
{
	if (key == 'i')
	{
		nbr_printer(5);
		return (1);
	}
	else if (key == 'c')
	{
		printf("É um Char!\n");
		return (1);
	}
	else if (key == 's')
	{
		printf("É uma String!\n");
		return (1);
	}
	else if (key == 'p')
	{
		printf("É um Ponteiro!\n");
		return (1);
	}
	else if (key == 'd')
	{
		printf("É um Double!\n");
		return (1);
	}
	else if (key == 'u')
	{
		printf("É um Unsigned!\n");
		return (1);
	}
	else if (key == 'x')
	{
		printf("É um Hex minúsculo!\n");
		return (1);
	}
	else if (key == 'X')
	{
		printf("É um Hex maiúsculo!\n");
		return (1);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list args;
	int i;
	int j;

	i = 0;
	j = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			j += type_printer(&args, str[i + 1]);
		i++;
	}
	return (0);
}

int	main(void)
{
	ft_printf("%i", 9);
	ft_printf("%c", 9);
	ft_printf("%s", 9);
	ft_printf("%p", 9);
	ft_printf("%d", 9);
	ft_printf("%u", 9);
	ft_printf("%x", 9);
	ft_printf("%X", 9);
}
