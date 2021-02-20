/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:50:24 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/19 23:04:58 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t count;

	count = 0;
	while (count < n)
	{
		if (s1[count] == 0 && s1[count] == s2[count])
		{
			return (0);
		}
		else if (s2 == 0 && s1[count] == s2[count])
		{
			return (0);
		}
		else if (s1[count] == s2[count])
		{
			count++;
		}
		else
		{
			return ((unsigned char)s1[count] - (unsigned char)s2[count]);
		}
	}
	return (0);
}
