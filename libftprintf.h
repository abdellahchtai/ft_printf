/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abchtaib <abchtaib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 19:35:08 by abchtaib          #+#    #+#             */
/*   Updated: 2025/11/26 20:24:50 by abchtaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putstr(char *str, int *p);
void	ft_putchar(char c, int *p);
void	ft_putnbr(int n, int *p);
void	ft_unsputnbr(unsigned int n, int *p);
void	ft_puthexa(unsigned int n, int x, int *p);
void	ft_putaddhexa(void *s, int x, int *p);

#endif
