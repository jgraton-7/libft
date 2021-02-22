/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:35:55 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/22 19:32:43 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t count;
	size_t c2;

	if(!(str = malloc(sizeof(*s) * len + 1)))
		return (NULL);
	if(!s)
		return(NULL);
	count = 0;
	c2 = 0;
	while(s[c2++])
	{
		if(c2 >= start && count < len)
		{
			str[count] = s[start];
			count++;
			start++;
		}
	}
	str[count] = '\0';
	return(str);
}
