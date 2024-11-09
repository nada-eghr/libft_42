/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 07:36:15 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/07 21:44:47 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char				*d;
	const unsigned char	*s = (const unsigned char *)src;
	size_t				i;

	d = (char *)dest;
	if (dest == src || n == 0)
		return (dest);
	if (src < dest)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
// int main()
// {
//     char d[18];
//     char s[] = "nada essguiar";
//     printf("%s\n",ft_memmove(d , s, 7) );
//     printf("%s\n",memmove(d , s, 7) );

// }