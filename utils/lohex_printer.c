/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lohex_printer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:32:05 by igomes-h          #+#    #+#             */
/*   Updated: 2021/11/21 17:22:04 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../ft_printf.h"

int	lohex_printer(unsigned int hex)
{
	return (new_base_printer(hex, "0123456789abcdef"));
}
