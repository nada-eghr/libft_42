/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:44:36 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/17 16:10:52 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	if(!s)
		return;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
// int	main(void)
// {
// 	char str[] = "nada essguiar";
// 	ft_putstr_fd(str, 1);
// }