/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:06:14 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/07 21:34:14 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned const char *)s1;
	s = (unsigned const char *)s2;
	while (i < n)
	{
		if (d[i] > s[i])
			return (1);
		else if (d[i] < s[i])
			return (-1);
		else
			return (0);
		i++;
	}
}
// int main ()
// {
//     unsigned const char s1[] = "nada essguiar";
//     unsigned const char s2[] = "lucy";
//     printf("%d\n", ft_memcmp(s1, s2, 4));
//     printf("%d\n", memcmp(s1, s2, 4));
// }