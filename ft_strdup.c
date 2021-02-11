/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:59:25 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/11 12:44:26 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char *strdup(const char *s)
{
	int count;
	char *cpy_s;

	count = 0;
	if(!s)
	{
		return(0);
	}
	cpy_s = (char *)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if(!cpy_s)
	{
		return(0);
	}
	while(s[count])
	{
		cpy_s[count] = s[count];
		count++;
	}
	cpy_s[count] = 0;
	return(cpy_s);
}


int main()
{
    char *p1 = "Raja";
    char *p2;
    p2 = ft_strdup(p1);

    printf("Duplicated string is : %s", p2);
    return 0;
}
