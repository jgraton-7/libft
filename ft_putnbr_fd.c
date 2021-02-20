/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 21:25:16 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/19 22:54:33 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static int conv(int ele_n)
{
	if (ele_n < 0)
		ele_n = ele_n * -1;
	return (ele_n);
}

void ft_putnbr_fd(int n, int fd)
{
	char str[13];
	int len;
	int neg;

	neg = (n < 0);
	ft_bzero (str, 13);
	len = 0;
	if(n == 0)
		str[0] = '0';
	while(n != 0)
	{
		str[len++] = conv(n%10) + '0';
		n /= 10;
	}
	if(neg)
		str[len] = '-';
	else if( len > 0)
		len--;
	while (len >= 0)
	{
		write(fd, &str[len--], 1);
	}

}
