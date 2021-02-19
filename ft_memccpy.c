/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:45:07 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/11 21:41:31 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t count;
	unsigned char c2;

	count = 0;
	c2 = (unsigned char)c;
	while(count < n)
	{
		((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
		count++;
		if(((unsigned char *)dest)[count-1] == c2)
		{
			return(&((unsigned char *)dest)[count]);
		}

	}
	return (0);
}



