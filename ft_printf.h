/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdelba <mabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:19:55 by mabdelba          #+#    #+#             */
/*   Updated: 2021/12/03 13:33:42 by mabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(int c, int *compt);
void	ft_putlhexa(unsigned int nb, int *compt);
void	ft_puthexa(unsigned long int nb, int *compt);
void	ft_putnbr_positif(unsigned int nb, int *compt);
void	ft_putnbr(int nb, int *compt);
void	ft_putpointer(unsigned long int nb, int *compt);
void	ft_putstr(char *str, int *compt);
void	ft_putuhexa(unsigned int nb, int *compt);

#endif
