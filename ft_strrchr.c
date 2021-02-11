/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:00:43 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/10 17:28:06 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	int count;

	count = 0;
	while(s[count])
	{
		count++;
	}
	while(count >= 0)
	{
		if(s[count] == (char)c)
		{
			return((char *)s + count);
		}
	count--;
	}
	return (0);
}

