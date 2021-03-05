/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 21:25:16 by jgraton-          #+#    #+#             */
/*   Updated: 2021/03/05 15:07:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	conv(int ele_n)
{
	if (ele_n < 0)
		ele_n = ele_n * -1;
	return (ele_n);
}

void		ft_putnbr_fd(int n, int fd)
{
	char	str[13];
	int		len;
	int		neg;

	neg = (n < 0);
	ft_bzero(str, 13);
	len = 0;
	if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		str[len++] = conv(n % 10) + '0';
		n /= 10;
	}
	if (neg)
		str[len] = '-';
	else if (len > 0)
		len--;
	while (len >= 0)
		write(fd, &str[len--], 1);
}
