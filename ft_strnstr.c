/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:40:32 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/19 23:06:42 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	count;
	size_t	count2;

	count = 0;
	if (!big || !small)
		return (NULL);
	if (!small[0])
		return ((char*)big);
	while (big[count] && count < len)
	{
		count2 = 0;
		while (big[count2] && small[count2] &&
			big[count + count2] == small[count2] && count + count2 < len)
		{
			count2++;
		}
		if (small[count2] == 0)
			return ((char *)(big + count));
		count++;
	}
	return (NULL);
}
