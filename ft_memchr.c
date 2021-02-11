/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 20:04:21 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/08 19:23:28 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <memory.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"


void *ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *dest;

	while(n-- > 0)
	{
		dest = (unsigned char *)str;
		if(*dest == (unsigned char)c)
		{
			return(dest);
		}
		str++;
	}
	return (0);
}


int main ()
{
   const char str[] = "http://www.w3cschool.cc";
   const char ch = ':';
   char *ret;

   ret = ft_memchr(str, ch, 80);

   printf("|%c| teste - |%s|\n", ch, ret);

   return(0);
}
