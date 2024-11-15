/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stafpec <stafpec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:45:58 by tarini            #+#    #+#             */
/*   Updated: 2024/11/15 04:04:11 by stafpec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i = 0;
    if (!s || !f)
        return NULL;
    size_t len = 0;
    while (s[len])
        len++;
    char *result = (char *)malloc(sizeof(char) * (len + 1));
    if (!result)
        return NULL;
    while (i < len)
    {
        result[i] = f(i, s[i]);
        i++;
    }
    result[len] = '\0';
    return result;
}



