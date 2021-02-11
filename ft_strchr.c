/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 18:19:58 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/08 20:00:01 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	while(*s)
	{
		if(*s == (char)c)
		{
			return((char *)s);
		}
		s++;
	}
	return (0);
}

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '/';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
