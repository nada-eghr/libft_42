/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:18:18 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/18 20:01:31 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
