/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:59:25 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/15 19:25:31 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strdup(const char *s)
{
	char *cpy;
	int count;

	count = 0;
	if(!s)
	{
		return(0);
	}
	cpy = (char *)malloc(sizeof(*s) * ft_strlen(s)+1);
	if(!cpy)
	{
		return(0);
	}
	while(s[count])
	{
		cpy[count] = s[count];
		count++;
	}
	cpy[count] = 0;
	return(cpy);
}
