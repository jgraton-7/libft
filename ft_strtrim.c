/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:52:37 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/22 17:05:53 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>


static int check_in_set(char s, const char *set)
{
	size_t count;

	count = 0;
	while(set[count])
	{
		if(set[count] == s)
			return(1);
		count++;
	}
	return(0);
}


char *ft_strtrim(char const *s1, char const *set)
{
	char *cpy;
	int count_start;
	int count_end;
	int count;

	count_start = 0;

	while(s1[count_start] && check_in_set(s1[count_start], set))
		count_start++;
	count_end = ft_strlen(s1);
	while(count_end > count_start && check_in_set(s1[count_end - 1], set))
		count_end--;
	cpy = malloc(sizeof(char) * (count_end - count_start + 1));
	if(!cpy)
		return(NULL);
	count = 0;
	while(count_end > count_start)
	{
		cpy[count] = s1[count_start];
		count++;
		count_start++;
	}
	cpy[count] = 0;
	return(cpy);
}
