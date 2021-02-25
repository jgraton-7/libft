/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 15:02:14 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/23 01:25:36 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"
#include <stdlib.h>

static    int alloc(char const *s, char c)
{
    int count;
    int sep;
	char *tmp;

    count = 0;
    sep = 0;
	tmp = ft_strtrim(s, &c);
	if(*tmp == '\0')
		return (0);
	s = tmp;
	while(s[count] != '\0')
    {
        if(s[count] == c)
        {
			sep++;
			while(s[count] == c)
				count++;
		}
        else
			count++;
    }
    sep++;
	free(tmp);
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

char	**ft_split(char const *s, char c)
{
	char **str;
	const char *pts;
	int c1;
	int c2;
	int c3;

	pts = s;
	if (!s)
		return (0);
	c1 = alloc(pts, c);
	if (!(str = (char **)malloc(sizeof(char*) * (c1 + 1))))
		return (0);
	c2 = 0;
	while(c2 < c1)
	{
		c3 = 0;
		pts = alloc2(pts,c);
		while(*pts != c && *pts != 0)
		{
			c3++;
			pts++;
		}
		if(!(str[c2] = (char *)malloc(sizeof(char) * c3 + 1)))
			return (NULL);
		ft_strlcpy(str[c2++], pts - c3, c3 + 1);
	}
	str[c1] = NULL;
	return (str);
}
