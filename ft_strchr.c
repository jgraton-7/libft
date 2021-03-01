/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 18:19:58 by jgraton-          #+#    #+#             */
/*   Updated: 2021/03/01 13:45:25 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int count;

	count = 0;
	while (s[count])
	{
		if (s[count] == (char)c)
		{
			return ((char*)s + count);
		}
		count++;
	}
	if (s[count] == (char)c)
	{
		return ((char*)s + count);
	}
	return (0);
}
