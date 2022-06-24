/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annstepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:08:23 by annstepa          #+#    #+#             */
/*   Updated: 2022/04/25 18:08:26 by annstepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include "stdlib.h"

int	ft_printf(const char *s, ...);
int	ft_putstr(char *str);
int	ft_strlen(char *str);
int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_intlen(int n);
int	ft_putnbr_uns(int n);
int	tohex(unsigned int n, char *alphabet);
int	ft_print_ptr(unsigned long long n);
int	ft_ptrlen(unsigned long long n);
int	ft_ptrhex(unsigned long long n, char *alphabet);

#endif
