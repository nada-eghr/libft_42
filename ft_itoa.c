/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:16:55 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/20 12:05:59 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		count += 1;
		nb = -nb;
	}
	if (nb == 0)
		count = 1;
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		c;

	nbr = n;
	c = count(n);
	str = malloc(c + 1);
	if (!str)
		return (NULL);
	str[c] = '\0';
	if (nbr < 0)
		nbr = -nbr;
	c -= 1;
	while (c >= 0)
	{
		str[c] = nbr % 10 + '0';
		nbr /= 10;
		c--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
// #include<stdio.h>
// int main()
// {
// 	printf("%s", ft_itoa(13));
// }
