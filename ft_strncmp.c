/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:56:20 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/17 17:03:12 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)s1;
	s = (unsigned char *)s2;
	i = 0;
	while ((d[i] || s[i]) && i < n)
	{
		if (d[i] != s[i])
			return (d[i] - s[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	s1[] = "Sada essghiar";
// 	const char	s2[] = "SASAR";

// 	printf("%d\n", ft_strncmp(s1, s2, 2));
//     printf("%d\n", strncmp(s1, s2, 2));
// }
