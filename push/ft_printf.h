/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 22:50:58 by aabdou            #+#    #+#             */
/*   Updated: 2021/12/28 18:08:09 by aabdou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *fp, ...);
int	ft_check_fla(char arg, va_list ap);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_puthex(unsigned int n, char arg);
int	ft_pointer(unsigned long *ptr);
int	ft_putp(unsigned long long nb);

#endif
