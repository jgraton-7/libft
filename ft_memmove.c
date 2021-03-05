/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 16:40:39 by jgraton-          #+#    #+#             */
/*   Updated: 2021/03/05 15:00:05 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t count;

	if (!dest && !src)
		return (0);
	if (src < dest)
	{
		count = n;
		while (count > 0)
		{
			count--;
			((char *)dest)[count] = ((char *)src)[count];
		}
	}
	else
	{
		count = 0;
		while (count < n)
		{
			((char *)dest)[count] = ((char *)src)[count];
			count++;
		}
	}
	return (dest);
}
