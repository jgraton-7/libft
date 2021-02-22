/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:57:49 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/22 20:09:39 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmem, size_t size)
{
	void *str;

	str = (void*)malloc(nmem * size);
	if (!str)
		return (NULL);
	ft_bzero(str, nmem);
	return (str);
}
