/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:40:39 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/11 20:18:58 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t count;

	if(n == 0)
	{
		return(dest);
	}
	if(src < dest)
	{
		count = n;
		while(count > 0)
		{
			count--;
			((char *)dest)[count] = ((char *)src)[count];
		}
	}
	else
	{
		count = 0;
		while(count < n)
		{
			((char *)dest)[count] = ((char *)src)[count];
			count++;
		}
	}
	return(dest);
}

