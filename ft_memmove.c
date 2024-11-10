/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:42:46 by tarini            #+#    #+#             */
/*   Updated: 2024/11/09 16:47:05 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t count;
    char *d = (char*)dest;
    const char *s;
	s = (const char*)src;

    if (!dest || !src)
        return NULL;

    if (d > s && d < s + n)
    {
        while (n--)
            d[n] = s[n];
    } 
    else 
    {
        count = 0;
        while (count < n) 
	{
            d[count] = s[count];
            count++;
        }
    }
    return dest;
}

/*
#include <stdio.h>

int main(void) {
    char src[] = "Geeks";
    char dest[] = "Quiz";
    printf("Before : %s\n", dest);
    memmove(dest, src, 5);
    printf("After origin function : \n%s", dest);

    char ft_src[] = "Geeks";
    char ft_dest[] = "Quiz";
    ft_memmove(ft_dest, ft_src, 5);
    printf("\nAfter 42 function : \n%s\n", ft_dest);

    return 0;
}

*/
