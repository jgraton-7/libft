/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 01:09:33 by user42            #+#    #+#             */
/*   Updated: 2021/02/18 01:46:47 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_bzero(void *s, size_t n)
{
	size_t count;

	count = 0;
	if(n == 0)
	{
		return ;
	}
	if(!s)
	{
		return ;
	}
	while(count < n)
	{
		*(char *)(s + count) = 0;
		count++;
	}

}
