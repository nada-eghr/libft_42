/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:51:39 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/17 17:32:52 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	j;
	size_t  s_len ; 

	if (!s)
		return (NULL);
	s_len  = ft_strlen(s);
	if(start > s_len  || len == 0)
		return (ft_strdup(""));
		if(len > s_len- start)
		len =  s_len - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && j < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}
