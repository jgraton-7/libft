/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 19:57:49 by jgraton-          #+#    #+#             */
/*   Updated: 2021/03/05 14:57:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmem, size_t size)
{
	void *str;

	if (!(str = (void*)malloc(nmem * size)))
		return (NULL);
	ft_bzero(str, nmem * size);
	return (str);
}
