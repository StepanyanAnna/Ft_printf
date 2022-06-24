/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annstepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:47:07 by annstepa          #+#    #+#             */
/*   Updated: 2022/04/25 17:47:32 by annstepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr_uns(int n)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	i = n;
	if (i < 0)
	{
		i = (i * -1);
		len += ft_putchar ('-');
	}
	if (i > 9)
	{
		len += ft_putnbr (i / 10);
		len += ft_putchar ((i % 10) + '0');
	}
	else
		len += ft_putchar (i + '0');
	return (len);
}
