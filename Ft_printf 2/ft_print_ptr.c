/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: annstepa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:19:01 by annstepa          #+#    #+#             */
/*   Updated: 2022/04/25 17:19:05 by annstepa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_print_ptr(unsigned long long n)
{
	return (ft_putstr("0x") + ft_ptrhex(n, "0123456789abcdef"));
}

int	ft_ptrlen(unsigned long long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 16;
		count++;
	}
	return (count);
}

int	ft_ptrhex(unsigned long long n, char *alphabet)
{
	int		next;
	int		len;
	int		copylen;
	char	*str;

	if (n == 0)
		return (ft_putchar('0'));
	if (!n)
		return (0);
	len = ft_ptrlen(n);
	copylen = len;
	str = malloc(len + 1);
	if (!str)
		return (0);
	str[len--] = '\0';
	while (n)
	{
		next = n % 16;
		n /= 16;
		str[len] = alphabet[next];
		--len;
	}
	ft_putstr (str);
	free (str);
	return (copylen);
}

// int main()
// {
//   int a = printf("%p\n", -2147483647);
//   printf("%d", a);
// }
