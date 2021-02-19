/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:33:38 by user42            #+#    #+#             */
/*   Updated: 2021/02/19 14:22:55 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t count;

	count = 0;
	unsigned char *n_str;
	n_str = (unsigned	char	*)str;
	while (count < n)
	{
		n_str[count] = (unsigned	char)c;
		count++;
	}
	return (str);
}
