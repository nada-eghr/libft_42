/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:13:56 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/11 15:11:48 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] && s[i] != c)
			i++;
		count++;
	}
	return (count);
}

char	**ft_free(char **tab, int n)
{
	int	i;

	i = 0;
	while (i <= n)
	{
		free(tab[n]);
		tab[n] = NULL;
		n--;
	}
	free(tab);
	return (NULL);
}

int	ft_skip(char const *str, char c, int *start)
{
	int	i;
    i = *start;
    int count;

    count = 0;
    
	while (str[i] && str[i] == c)
		i++;
	*start = i;
	while (str[i] && str[i] != c)
	{
		i++;
        count++;
	}
    return (count);
}

char	**ft_alloc(char **tab, char const *str, char c)
{
	int	j;
	int	i;
	int	start;
	int	count_char;
	int	k;

	j = 0;
	i = 0;
    start = 0;
	while (j < count_word(str, c))
	{
		count_char = ft_skip(str, c, &start);
		tab[j] = malloc(count_char + 1);
		if (!tab[j])
			return (ft_free(tab, j));
		k = 0;
		while (k < count_char)
			tab[j][k++] = str[start++];
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_splitt(char const *str, char c)
{
	int		k;
	int		cw;
	char	**tab;

	if (!str)
		return (NULL);
	cw = count_word(str, c);
	tab = malloc((cw + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	return (ft_alloc(tab, str, c));
}
// int	main(void)
// {
// 	char *tab = "  nada essghiar jfjdkd   ";
// 	char c = ' ';
// 	int j;
// 	char **str = ft_splitt(tab, c);
// 	int i = 0;
// 	int c_w = count_word(tab, c);

// 	while (i < c_w)
// 	{
// 		j = 0;
// 		while (str[i][j])
// 		{
// 			printf("%c", str[i][j]);
// 			j++;
// 		}
// 		printf("\n");
// 		i++;
// 	}
// }