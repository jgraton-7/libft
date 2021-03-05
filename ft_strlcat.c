/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 17:03:05 by jgraton-          #+#    #+#             */
/*   Updated: 2021/03/05 15:04:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	cpy;
	size_t	len_des;
	size_t	len_src;

	len_src = ft_strlen(src);
	len_des = ft_strlen(dest);
	len = len_des;
	cpy = 0;
	if (len_des < size - 1 && size > 0)
	{
		while (src[cpy] && len_des + cpy < size - 1)
		{
			dest[len + cpy] = src[cpy];
			cpy++;
		}
		dest[len + cpy] = 0;
	}
	if (len_des >= size)
		len_des = size;
	return (len_des + len_src);
}
