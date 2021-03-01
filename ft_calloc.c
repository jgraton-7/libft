/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:57:49 by jgraton-          #+#    #+#             */
/*   Updated: 2021/03/01 18:08:24 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmem, size_t size)
{
	void *str;

	if(!(str = (void*)malloc(nmem * size)))
		return (NULL);
	ft_bzero(str, nmem * size);
	return (str);
}
