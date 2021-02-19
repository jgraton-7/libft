/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:26:59 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/12 17:43:15 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int arg)
{
	if(arg >= 'a' && arg <= 'z')
	{
		return(1);
	}
	else if(arg >= 'A' && arg <= 'Z')
	{
		return(1);
	}
	else if(arg >= 48 && arg <= 57)
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
