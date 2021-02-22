/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 15:21:08 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/22 18:12:28 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	valor(int num)
{
	int neg;

	neg = 0;
	if (num < 0)
	{
		neg = 1;
	}
	return (neg);
}

static int	digits(int n)
{
	int c;

	c = 0;
	if (n < 0)
		c++;
	while (n)
	{
		c++;
		n /= 10;
	}
	return (c);
}

static char	*my_spl(int n, int c2, char *str)
{
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[c2-- - 1] = '8';
			n = n / 10;
		}
		n = -n;
	}
	while (n != 0 && c2 >= 0)
	{
		str[c2-- - 1] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		c2;

	c2 = digits(n);
	if (!(str = ft_calloc(11 + valor(n), sizeof(*str))))
		return (0);
	str[c2] = '\0';
	my_spl(n, c2, str);
	return (str);
}
