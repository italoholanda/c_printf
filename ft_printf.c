/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:53:34 by coder             #+#    #+#             */
/*   Updated: 2021/11/16 11:20:50 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// cspdiuxX%
// pxX%

static int	print_by_type(va_list *args, char key)
{
	if (key == 'i' || key == 'd') /* Integer */
	{
		return (nbr_printer(va_arg(*args, int)));
	}
	if (key == 'u') /* Unsigned Int */
	{
		return (unint_printer(va_arg(*args, int)));
	}
	if (key == 'c') /* Char */
	{
		return (char_printer(va_arg(*args, int)));
	}
	if (key == 's') /* String */
	{
		return (str_printer(va_arg(*args, char *)));
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			j += print_by_type(&args, str[i + 1]);
		i++;
	}
	return (0);
}
