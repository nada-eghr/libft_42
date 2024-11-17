/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:21:11 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/17 18:06:20 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	int len = ft_strlen(s);
	while (i <= len)
	{
		
		if (s[i] == (char)c)
			return ((char *)(s +i ));
		i++;
	}
	
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void){
// 	const char s[] = "nada essghiar";
// 	char c = '\0';
// 	printf("string:%s\n",ft_strchr(s,c));
// 	// printf("%s",strchr(s,c));
// }
