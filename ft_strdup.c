/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:59:25 by jgraton-          #+#    #+#             */
/*   Updated: 2021/03/05 15:11:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*cpy;
	int		count;

	count = 0;
	if (!(cpy = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1)))
		return (0);
	while (s[count])
	{
		cpy[count] = s[count];
		count++;
	}
	cpy[count] = 0;
	return (cpy);
}
