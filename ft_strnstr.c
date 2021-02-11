/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:40:32 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/09 15:48:42 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strnstr(const char *big, const char *small, size_t len)
{
	int count;
	int count2;

	count = 0;
	if(small == '\0')
	{
		return((char *)big);
	}
	while(count < len)
	{
		count2 = 0;
		while(big[count + count2] == small[count2] && (count) < len)
		{
			count2++;
		}
		if(small[count2] == '\0')
		{
			return((char *)big + count);
		}
		count++;
	}
	return(0);

}

int main()
{
   const char haystack[20] = "W3CSchool teste e35";
   const char needle[10] = "School";
   char *ret;

   ret = strstr(haystack, needle);

   printf("teste: %s\n", ret);

   return(0);
}
