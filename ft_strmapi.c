/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 19:09:53 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/19 23:03:54 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*cpy;
	int		count;

	count = 0;
	if (!s)
		return (NULL);
	if (!(cpy = ft_strdup(s)))
	{
		return (NULL);
	}
	while (s[count])
	{
		cpy[count] = f(count, s[count]);
		count++;
	}
	return (cpy);
}
