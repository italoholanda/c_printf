/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:53:34 by coder             #+#    #+#             */
/*   Updated: 2021/11/13 20:24:19 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdarg.h>
#include "ft_printf.h"

static	int print_by_type(va_list *args, char key)
{
	if (key == 'i' || key == 'u')
	{
		nbr_printer(235);
		return (1);
	}
	args++;
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
			j += print_by_type(&args, str[i + 1]);
		i++;
	}
	return (0);
}

int	main(void)
{
	ft_printf("%i", 9);
}
