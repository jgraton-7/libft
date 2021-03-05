/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:23:56 by jgraton-          #+#    #+#             */
/*   Updated: 2021/03/05 15:09:31 by user42           ###   ########.fr       */
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
	if (!(str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[count])
	{
		str[count] = s1[count];
		count++;
	}
	cpy = 0;
	while (s2[cpy])
	{
		str[count] = s2[cpy];
		count++;
		cpy++;
	}
	str[count] = '\0';
	if (!str)
		return (NULL);
	return (str);
}
