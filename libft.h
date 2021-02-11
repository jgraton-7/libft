/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 01:27:26 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/10 21:06:44 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdio.h>

void *ft_memset(void *str, int c, size_t n);

void bzero(void *s, size_t n);

void *ft_memcpy(void *dest, const void *src, size_t n);

void *ft_memccpy(void *dest, const void *src, int c, size_t n);

void *ft_memset(void *str, int c, size_t n);

int ft_memcmp(const void *s1, const void *s2, size_t n);

size_t ft_strlen(const char *s);

char *ft_strchr(const char *s, int c);

size_t ft_strlen(const char *s);

#endif
