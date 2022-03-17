/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuhexa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:20:48 by mabdelba          #+#    #+#             */
/*   Updated: 2021/12/03 16:34:22 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuhexa(unsigned int nb, int *compt)
{
	char	*tab;

	tab = "0123456789ABCDEF";
	if (nb <= 15)
		ft_putchar(tab[nb], compt);
	else
	{
		ft_putuhexa(nb / 16, compt);
		ft_putchar(tab[nb % 16], compt);
	}
}
