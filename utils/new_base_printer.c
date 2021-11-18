/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_base_printer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomes-h <italogholanda@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:00:03 by igomes-h          #+#    #+#             */
/*   Updated: 2021/11/17 21:40:39 by igomes-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	new_base_printer(unsigned long nbr, const char *base)
{
    int    s;

    s = 1;
    if (nbr >= (unsigned long) ft_strlen(base))
    {
        s = new_base_printer(nbr / ft_strlen(base), base);
        return (s + new_base_printer(nbr % ft_strlen(base), base));
    }
    else
    {
        if (nbr < 0)
            nbr *= -1;
        ft_putchar_fd(base[nbr], 1);
        return (s);
    }
	return (0);
}
