/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:13:51 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/07 21:35:23 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	slen;
	unsigned int	dlen;
	int				i;
	int				j;

	slen = ft_strlen(src);
	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	dlen = i;
	if (size <= dlen)
		return (size + slen);
	while (src[j] && j < size - dlen - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dlen + slen);
}

// int main(){
//     char dest[] = "na";
//     char src[] = " essghiar";
//     printf("%zu\n",ft_strlcat(dest, src, 1));
//     printf("%zu\n", strlcat(dest, src, 1));
//     printf("%s", dest);
// }
