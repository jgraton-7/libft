/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 23:54:44 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/10 16:46:53 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_isascii(int c)
{
	if(c >= 0 && c <= 127 )
	{
		return(1);
	}
	else
	{
		return(0);
	}
	return(0);
}



