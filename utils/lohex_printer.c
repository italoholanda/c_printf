/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lohex_printer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:32:05 by igomes-h          #+#    #+#             */
/*   Updated: 2021/11/18 19:41:56 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int	lohex_printer(unsigned long hex)
{
	return (new_base_printer(hex, "0123456789abcdef"));
}