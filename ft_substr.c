/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 16:35:55 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/20 04:23:26 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *str;
	size_t count;

	if(!(str = malloc(sizeof(*s) * len + 1)))
		return (NULL);
	count = 0;
	if(!s)
		return(NULL);
	while(count < len)
	{
		str[count] = s[start];
		count++;
		start++;
	}
	str[count] = '\0';
	return(str);
}
