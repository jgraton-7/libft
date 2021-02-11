/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:59:29 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/09 20:34:30 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int character)
{
	if(character >= 56 && character <= 90)
	{
		return(1024);
	}
	else if(character >= 97 && character <= 122)
	{
		return(1024);
	}
	else
	{
		return (0);
	}
	return(0);
}

