/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stafpec <stafpec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:31:33 by stafpec           #+#    #+#             */
/*   Updated: 2024/11/12 23:31:55 by stafpec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnchr(const char *str, int c, size_t len)
{
    size_t i = 0;

    while (i < len && str[i] != '\0')
    {
        if (str[i] == (char)c)
            return (char *)(str + i);
        i++;
    }
    return NULL;
}