/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 19:43:43 by abchtaib          #+#    #+#             */
/*   Updated: 2025/11/28 15:36:52 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_check(char c, va_list ap, int *p)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int), p);
	else if (c == 'c')
		ft_putchar(va_arg(ap, int), p);
	else if (c == 's')
		ft_putstr(va_arg(ap, char *), p);
	else if (c == 'u')
		ft_unsputnbr(va_arg(ap, unsigned int), p);
	else if (c == '%')
		ft_putchar('%', p);
	else if (c == 'x')
		ft_puthexa(va_arg(ap, unsigned int), 0, p);
	else if (c == 'X')
		ft_puthexa(va_arg(ap, unsigned int), 1, p);
	else if (c == 'p')
		ft_putaddhexa(va_arg(ap, void *), 0, p);
	else
		*p = -1;
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		baytes;
	int		i;

	baytes = 0;
	i = 0;
	if (!str)
		return (-1);
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_check(str[i + 1], ap, &baytes);
			if (baytes == -1)
				return (baytes);
			i++;
		}
		else
			ft_putchar(str[i], &baytes);
		i++;
	}
	va_end(ap);
	return (baytes);
}
