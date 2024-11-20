/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:57:33 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/20 19:18:50 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	b[] = "lucy";
// 	// 1997
// 	ft_memset(b, 'a', 4);
// 	ft_memset(b, 'd', 3);
// 	ft_memset(b, 'n', 1);
// 	printf("%s", b);
// }