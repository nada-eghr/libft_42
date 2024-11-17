/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:05:49 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/17 21:45:06 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"
#include "libft.h"
#include "libft.h"
#include "libft.h"




char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i ;
	i = 0;
	int slen ;
	if (!s || !f)
		return (NULL);
	slen = ft_strlen(s);
	char *ptr;
	ptr = malloc(slen + 1);
	if (!ptr)
	return (NULL);
	while (s[i])
	{
		ptr[i] = f(i,s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
	
}

// int main()
// {
// 	char (*f)(unsigned int, char);
// 	f = appercase;
// 	char const s[] = "nada ESFsghiar";
// 	printf("%s\n",ft_strmapi(s,f));
	
// }
