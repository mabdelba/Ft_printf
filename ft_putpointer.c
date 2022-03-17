/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:20:42 by mabdelba          #+#    #+#             */
/*   Updated: 2021/12/03 14:01:31 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned long int nb, int *compt)
{
	char	*tab;

	tab = "0123456789abcdef";
	if (nb <= 15)
		ft_putchar(tab[nb], compt);
	else
	{
		ft_puthexa(nb / 16, compt);
		ft_putchar(tab[nb % 16], compt);
	}
}

void	ft_putpointer(unsigned long int nb, int *compt)
{
	ft_putstr("0x", compt);
	ft_puthexa(nb, compt);
}
