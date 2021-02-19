/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 19:32:06 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/11 18:14:27 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t coun;

	coun = 0;
	while(n-- > 0)
	{
		if(((unsigned char *)s1)[coun] != ((unsigned char *)s2)[coun])
		{
			return (((unsigned char *)s1)[coun] - ((unsigned char *)s2)[coun]);
		}
		coun++;
	}
	return (0);
}

