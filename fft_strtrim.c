/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fft_strtrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:58:49 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/08 21:43:03 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	else
		return (NULL);
}

char	*fft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		end;
	int		total_len;
	char	*result;
	int		j;

	i = 0;
	end = ft_strlen(s1) - 1;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (end > i && ft_strchr(set, s1[end]))
		end--;
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
int main()
{
    char s1[] = "nada essghiarna";
    char s2[] = "na";
    printf("%s",fft_strtrim(s1,s2));
}

// aooooao