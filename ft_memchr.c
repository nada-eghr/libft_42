/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:36:29 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/21 13:39:27 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*ptr;
	unsigned char		d;

	i = 0;
	ptr = (unsigned const char *)s;
	d = (unsigned char)c;
	while (i < n)
	{
		if (ptr[i] == d)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
