/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_positif.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:18:38 by mabdelba          #+#    #+#             */
/*   Updated: 2021/12/03 16:34:00 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_positif(unsigned int nb, int *compt)
{
	if (nb < 10)
		ft_putchar(nb + '0', compt);
	else
	{
		ft_putnbr_positif(nb / 10, compt);
		ft_putchar((nb % 10) + '0', compt);
	}
}
