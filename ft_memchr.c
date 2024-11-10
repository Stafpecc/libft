/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:36:02 by tarini            #+#    #+#             */
/*   Updated: 2024/11/10 16:28:39 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	while (n < 0)
	{
		if (((char *)s)[n] == c & ft_isdigit(((int *)s)[n]))
			return (&((void *)s)[n]);
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int main(void) {

    char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 10;

    void * found = ft_memchr( data, 57, size );
    printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );

    found = ft_memchr( data, 50, size );
    printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
   
    if ( found != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found) );
    }

    return 0;
}