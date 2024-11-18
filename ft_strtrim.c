/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:58:49 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/18 20:18:39 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	new_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static int	new_end(char const *s1, char const *set, int end, int i)
{
	while (end > i && ft_strchr(set, s1[end]))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	int		total_len;
	char	*result;
	int		j;

	if (!s1 || !set)
		return (NULL);
	i = new_start(s1, set);
	end = new_end(s1, set, (ft_strlen(s1)) - 1, i);
	total_len = end - i + 1;
	result = malloc((total_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	j = 0;
	while (j < total_len)
	{
		result[j] = s1[i + j];
		j++;
	}
	result[j] = '\0';
	return (result);
}
