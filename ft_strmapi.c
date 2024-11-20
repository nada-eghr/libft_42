/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:05:49 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/20 20:44:55 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	upper(unsigned int i, char c)
// {
// 	i = 0;
// 	if (c >= 'a' && c <= 'z')
// 		return (c -= 32);
// 	return (c);
//}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		slen;
	char	*ptr;

	i = 0;
	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	ptr = malloc(slen + 1);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
