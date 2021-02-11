/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:50:24 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/09 17:23:08 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int count;

	count = 0;
	while(count < n)
	{
		if(s1[count] != s2[count])
		{
			return( s1[count] - s2[count]);
		}
		count++;
	}
	return(0);
}
