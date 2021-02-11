/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:26:08 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/10 19:56:40 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t count;

	count = 0;
	if(size > 0)
	{
		while(src[count] && count <= size)
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = 0;
	}
	return(count);
}

