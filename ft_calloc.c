/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:18:18 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/07 21:40:50 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_bzero(void *s, size_t n)
// {
// 	unsigned char	*p;
// 	unsigned int	i;

// 	p = (unsigned char *)s;
// 	i = 0;
// 	while (i < n)
// 	{
// 		p[i] = '0';
// 		i++;
// 	}
// }

void	*ft_calloc(size_t count, size_t size)
{
	void	*tab;

	if (!count && (count * size) / size != count)
		return (NULL);
	tab = malloc(count * size);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, (count * size));
	return (tab);
}
// int main()
// {
//     int count = 9;
//     int size = 5;
//     printf("%s\n", ft_calloc(count , size));

// }
// size_t i = 0;
// while (i < count * size)
// {
//     tab[i] = 0;
//     i++;
// }
// return (tab);else