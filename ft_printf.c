/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:56:15 by mabdelba          #+#    #+#             */
/*   Updated: 2021/12/03 16:39:01 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_minimize(const char *format, va_list	lst, int *compt, int i)
{
	if (format[i + 1] == 'c')
		ft_putchar(va_arg(lst, int), compt);
	if (format[i + 1] == 's')
		ft_putstr(va_arg(lst, char *), compt);
	if (format[i + 1] == 'd' || format[i + 1] == 'i')
		ft_putnbr(va_arg(lst, int), compt);
	if (format[i + 1] == 'x')
		ft_putlhexa(va_arg(lst, unsigned int), compt);
	if (format[i + 1] == 'X')
		ft_putuhexa(va_arg(lst, unsigned int), compt);
	if (format[i + 1] == 'u')
		ft_putnbr_positif(va_arg(lst, unsigned int), compt);
	if (format[i + 1] == 'p')
		ft_putpointer(va_arg(lst, unsigned long int), compt);
	if (format[i + 1] == '%')
		ft_putchar('%', compt);
}

int	ft_printf(const char *format, ...)
{
	va_list	lst;
	int		compt;
	int		i;

	compt = 0;
	i = 0;
	va_start(lst, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_minimize(format, lst, &compt, i);
			i++;
		}
		else
			ft_putchar(format[i], &compt);
		i++;
	}
	va_end(lst);
	return (compt);
}
