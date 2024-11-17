/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naessgui <naessgui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:24:39 by naessgui          #+#    #+#             */
/*   Updated: 2024/11/17 21:43:45 by naessgui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s,void (*f)(unsigned int, char*))
{
    size_t i ;
    i = 0;
    if (!s || !f)
        return ;
    while (s[i])
    {
        f(i , &s[i]);
        i++;
    }
    
}

// #include <stdio.h>
// void up(char *c)
// {
//     *c += 1;
// }

// int main()
// {
//     char c = 'a';
//     up(&c);
    
//     printf("%c" , c);
// }
