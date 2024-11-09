/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:06:55 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/07 21:30:41 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
#define LIBFT_H


# include <stdlib.h>
# include <stdio.h>
#include <limits.h>
#include <string.h>

char *ft_strdup(const char *s);
size_t  ft_strlen(const char *s);
int	ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void *ft_calloc(size_t count, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
void * ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void ft_memset(void *b, int c, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	ft_tolower(int c);
int	ft_toupper(int c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char * dest, const char * src, size_t size);
size_t  ft_strlcpy(char *  dst, const char *  src, size_t destsize);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);






#endif