/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:11:03 by abchtaib          #+#    #+#             */
/*   Updated: 2025/11/27 21:47:52 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putchar(char c, int *p)
{
	if (write(1, &c, 1) == -1)
		*p = -1;
	else
		*p += 1;
}

void	ft_putstr(char *str, int *p)
{
	int	i;

	if (!str)
	{
		if (write (1, "(null)", 6) == -1)
			*p = -1;
		else
			*p += 6;
		return ;
	}
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++], p);
		if (*p == -1)
			return ;
	}
}

void	ft_putnbr(int n, int *p)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', p);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, p);
		ft_putnbr(nb % 10, p);
	}
	else
		ft_putchar(nb + '0', p);
}

void	ft_unsputnbr(unsigned int n, int *p)
{
	if (n > 9)
	{
		ft_unsputnbr(n / 10, p);
		ft_unsputnbr(n % 10, p);
	}
	else
		ft_putchar(n + '0', p);
}
