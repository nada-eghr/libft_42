/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:13:51 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/21 13:38:26 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	slen;
	size_t	dlen;
	size_t	i;
	size_t	j;

	slen = ft_strlen(src);
	i = 0;
	j = 0;
	if (dest == NULL && dstsize == 0)
		return (slen);
	while (dest[i])
		i++;
	dlen = i;
	if (dstsize <= dlen)
		return (dstsize + slen);
	while (src[j] && j < dstsize - dlen - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dlen + slen);
}
