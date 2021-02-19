/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 20:04:21 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/11 18:14:22 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *dest;

	while(n-- > 0)
	{
		dest = (unsigned char *)str;
		if(*dest == (unsigned char)c)
		{
			return(dest);
		}
		str++;
	}
	return (0);
}
