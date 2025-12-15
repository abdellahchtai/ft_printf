/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils22.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 09:59:18 by abchtaib          #+#    #+#             */
/*   Updated: 2025/11/27 21:30:19 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthexa(unsigned int n, int x, int *p)
{
	char	*str;

	str = "0123456789abcdef";
	if (n > 15)
		ft_puthexa(n / 16, x, p);
	if (x && n % 16 > 9)
		ft_putchar(str[n % 16] - 32, p);
	else
		ft_putchar(str[n % 16], p);
}

void	ft_helper(unsigned long n, int x, int *p)
{
	char	*str;

	str = "0123456789abcdef";
	if (n > 15)
		ft_helper(n / 16, x, p);
	if (x && n % 16 > 9)
		ft_putchar(str[n % 16] - 32, p);
	else
		ft_putchar(str[n % 16], p);
}

void	ft_putaddhexa(void *s, int x, int *p)
{
	unsigned long	n;

	n = (unsigned long)s;
	if (!n)
	{
		ft_putstr("(nil)", p);
		return ;
	}
	ft_putstr("0x", p);
	ft_helper(n, x, p);
}
