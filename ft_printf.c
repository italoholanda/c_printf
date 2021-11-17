/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:53:34 by coder             #+#    #+#             */
/*   Updated: 2021/11/17 02:08:15 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_by_type(va_list *args, char key)
{
	if (key == 'i' || key == 'd')
		return (nbr_printer(va_arg(*args, int)));
	if (key == 'u')
		return (unint_printer(va_arg(*args, unsigned int)));
	if (key == 'c')
		return (char_printer(va_arg(*args, int)));
	if (key == 's')
		return (str_printer(va_arg(*args, char *)));
	if (key == 'p')
		return (ptr_ptinter(va_arg(*args, unsigned long ptr)));
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
			j += print_by_type(&args, str[++i]);
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	return (0);
}
