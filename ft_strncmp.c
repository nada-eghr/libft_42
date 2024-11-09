/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:56:20 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/07 21:29:31 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else if (s1[i] > s2[i])
	{
		return (1);
	}
	else
		return (-1);
}
// int	main(void)
// {
// 	const char	s1[] = "salma essghiar";
// 	const char	s2[] = "sisar";

// 	printf("%d\n", ft_strncmp(s1, s2, 4));
//     printf("%d\n", strncmp(s1, s2, 4));
// }
