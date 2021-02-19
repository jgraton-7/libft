/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:41:04 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/11 18:14:05 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint( int c )
{
	if(c >= 32 && c < 127 )
	{
		return(1);
	}
	else
	{
		return(0);
	}
	return(0);
}


