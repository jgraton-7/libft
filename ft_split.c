/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 15:02:14 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/22 15:41:09 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"
#include <stdlib.h>

static char **alloc_free(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static    int alloc(char const *s, char c)
{
    int count;
    int sep;

    count = 0;
    sep = 0;
    while(s[count] != '\0')
    {
        if(s[count] == c)
            sep++;
        count++;
    }
    sep++;
    return(sep);
}

static const char *alloc2(char const *s, char c)
{
    while(*s == c && *s != 0)
   {
        s++;
    }
    return (s);
}

char **ft_split(char const *s, char c)
{
    char **str;
    int count;
    int c2;
    int c3;

    if(!s)
        return (0);
    c3 = alloc(s, c);
    if(!(str = (char **)malloc(sizeof(char*) * c3)))
        return (0);
    count = 0;
    while(count < c3)
    {
        c2 = 0;
		s = alloc2(s, c);
        while(*s != c && *s != 0)
        {
          c2++;
          s++;
        }
        if(!(str[count] = (char *)malloc(sizeof(char*) * c2 +1)))
			return (alloc_free(str));
        ft_strlcpy(str[count++], s - c2, c2 + 1);
        s++;
    }
    return(str);
}
// #include <stdio.h>

// int main()
// {
//    char *s;

//    s = "testeaserquebrado";
//    printf("%s", (char *)ft_split(s,'s'));
//    return 0;
// }
