/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:17:35 by mabdelba          #+#    #+#             */
/*   Updated: 2021/12/03 13:55:37 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putlhexa(unsigned int nb, int *compt)
{
	char	*tab;

	tab = "0123456789abcdef";
	if (nb <= 15)
		ft_putchar(tab[nb], compt);
	else
	{
		ft_putlhexa(nb / 16, compt);
		ft_putchar(tab[nb % 16], compt);
	}
}
