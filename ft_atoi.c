/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 17:28:09 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/09 19:35:07 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_atoi(const char *nptr)
{
	int count;

	count = 0;
	while(nptr[count] != '\0')
	{
		if( 48 > nptr[count] && nptr[count] > 57 )
		{
			return((int)(nptr - count) -'0');
		}
		else
		{
			return((int)(nptr - '0'));
		}
		count++;
	}
	return(0);
}


int main (void) {
   int val;
   char str[20] = "123";

   val = ft_atoi(str);
   printf("String value = %s, Int value = %d\n", str, val);


   return(0);
}
