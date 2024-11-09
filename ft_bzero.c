/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:27:58 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/08 11:38:26 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = '0';
		i++;
	}
}
// int	main(void)
// {
// 	char	s[] = "nada";

// 	ft_bzero(s, 3);
// 	printf("%s\n", s);
// 	printf("%s\n", bzero(s, 3));
// }
