/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:59:29 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/19 22:18:14 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int character)
{
	if (character >= 'a' && character <= 'z')
	{
		return (1);
	}
	else if (character >= 'A' && character <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
