/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:23:56 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/20 03:23:07 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		count;
	int		cpy;

	count = 0;
	if(!(str = malloc(sizeof(s1) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	while (s1[count] != 0)
	{
		str[count] = s1[count];
		count++;
	}
	cpy = count;
	count = 0;
	while (s2[count] != 0)
	{
		str[cpy] = s2[count];
		count++;
		cpy++;
	}
	str[cpy] = '\0';
	if (!str)
		return (NULL);
	return (str);
}
