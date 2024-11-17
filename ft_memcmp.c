/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:06:14 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/16 11:47:35 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)s1;
	s = (unsigned char *)s2;
	while (i < n)
	{
		if (d[i] != s[i])
			return (d[i] - s[i]);
		i++;
	}
	return (0);
}
// int main ()
// {
//     unsigned char s1[] = "nana essguiar";
//     unsigned char s2[] = "ndda";
//     printf("%d\n", ft_memcmp(s1, s2, 1));
//     printf("%d\n", memcmp(s1, s2, 1));
// }