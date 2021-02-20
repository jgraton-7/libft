/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgraton- <jgraton-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 01:27:26 by jgraton-          #+#    #+#             */
/*   Updated: 2021/02/19 21:50:21 by jgraton-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>


int		ft_atoi(const char *nptr);

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nmemb, size_t size);

int		ft_isalnum(int arg);

int		ft_isalpha(int character);

int		ft_isascii(int c);

int		ft_isdigit( int arg);

int		ft_isprint( int c );

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

void	*ft_memchr(const void *str, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memset(void *str, int c, size_t n);

char	*ft_strchr(const char *s, int c);

char	*ft_strdup(const char *s);

size_t	ft_strlcat(char *dest, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlen(const char *s);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *big, const char *small, size_t len);

char	*ft_strrchr(const char *s, int c);

int 	ft_tolower(int c);

int		ft_toupper(int c);

char	*ft_substr(char const *s, unsigned int start,size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strtrim(char const *s1, char const *set);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

#endif
