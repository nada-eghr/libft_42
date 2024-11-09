/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:49:08 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/07 21:35:27 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	int	i;

	i = 0;
	if (destsize > 0)
	{
		while (src[i] && i < destsize)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main()
// {
//     char dest[2];
//     char src[] = "nada";
//     printf ("%zu\n", ft_strlcpy(dest, src,2));
//     printf ("%zu\n", strlcpy(dest, src,2 ));
//     printf ("%zu\n",strlen(src));
// }