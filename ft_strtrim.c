/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:12:18 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/08 19:34:45 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int slen;
	int end;
	char *result;
	int total;

	i = 0;
	slen = strlen(s1);
	end = slen - 1;
	while (s1[i] && strchr(set, s1[i]))
		i++;
	while (end > i && strchr(set, s1[end]))
		end--;
	total = end - i + 1;	
	result = malloc(sizeof(char) * (total + 1));
	if (result == NULL)
		return (NULL);
	int j = 0;
	while (j < total)
	{
		result[j] = s1[i + j];
		j++;
	}
	result[total] = '\0';
	return (result);
}