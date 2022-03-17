/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:18:28 by mabdelba          #+#    #+#             */
/*   Updated: 2021/12/03 16:34:10 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *compt)
{
	int	i;

	i = 0;
	if (!str)
		ft_putstr("(null)", compt);
	else
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		*compt = *compt + i;
	}
}
