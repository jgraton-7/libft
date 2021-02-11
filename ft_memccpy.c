/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 20:45:07 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/08 16:04:01 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char* msg = "This is the string: not copied";

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int count;

	count = 0;
	while(count < n && ((unsigned char *)src)[count] != c)
	{
		((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
		count++;
	}
	if(((unsigned char *)src)[count] == c)
	{
		((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
	}
	return (dest);
}



