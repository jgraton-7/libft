/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:26:08 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/22 18:57:21 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t count;

	count = 0;
	if (size > 0)
	{
		while (src[count] && count < size - 1)
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = 0;
	}
	return (ft_strlen(src));
}
