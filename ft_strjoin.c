/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 19:27:20 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/17 17:23:48 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, ft_strlen(s1));
	ft_memcpy(str +ft_strlen(s1), s2, ft_strlen(s2) );
	str[ ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (str);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include<string.h>
// int	main(void)
// {
// 	char s1[] = " dfgdfgdf ";
// 	char *s2 = " NULL   ";
// 	printf("%s\n", ft_strjoin(s1, s2));
// }