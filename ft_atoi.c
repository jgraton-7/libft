/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:28:09 by jgraton-          #+#    #+#             */
/*   Updated: 2021/03/04 17:06:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int count;
	int res;
	int neg;

	count = 0;
	while (str[count] == ' ' || str[count] == '\t' || str[count] == '\n'
	|| str[count] == '\v' || str[count] == '\f' || str[count] == '\r')
		count++;
	if (str[count] == '-')
		neg = -1;
	else
		neg = 1;
	if (str[count] == '-' || str[count] == '+')
		count++;
	res = 0;
	while (ft_isdigit(str[count]))
	{
		res = (res * 10) + (str[count] - '0');
		count++;
	}
	res = res * neg;
	return (res);
}
