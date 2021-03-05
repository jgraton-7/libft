/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 16:50:35 by jgraton-          #+#    #+#             */
/*   Updated: 2021/03/05 19:35:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    if(!lst || !*lst)
	while(lst && *lst)
	{
        tmp = ((t_list*)*lst) -> next;
        ft_lstdelone(lst, del);
        lst = tmp;
	}
    free(tmp);
}
