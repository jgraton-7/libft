/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 18:19:58 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/12 22:38:53 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int count;

	count = 0;
	if(!s)
	{
		return(NULL);
	}
	while(s[count])
	{
		if(s[count] == (char)c)
		{
			return((char*)s + count);
		}
		count++;
	}
	if(s[count] == (char)c)
	{
		return((char*)s+count);
	}
	return (0);
}


