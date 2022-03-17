/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:18:14 by mabdelba          #+#    #+#             */
/*   Updated: 2021/12/03 13:42:56 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nb, int *compt)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		*compt = *compt + 11;
	}
	else if (nb < 0)
	{
		ft_putchar('-', compt);
		nb = -nb;
		ft_putnbr(nb, compt);
	}
	else if (nb >= 0 && nb < 10)
		ft_putchar(nb + '0', compt);
	else
	{
		ft_putnbr(nb / 10, compt);
		ft_putchar((nb % 10) + '0', compt);
	}
}
