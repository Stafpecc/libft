/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:36:02 by tarini            #+#    #+#             */
/*   Updated: 2024/11/10 18:24:18 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	if (!s)
		return (NULL);
	while (++i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((void *)s)[i]);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
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

	char s[] = {0, 1, 2 ,3 ,4 ,5};
	const unsigned int si = 1;	

	void * c = memchr(s, 0, si);
	printf("%d\n", *((char *) c));
	
	void * f = ft_memchr(s, 0, si);
	printf("%d\n", *((char *) f));

    return 0;
}
*/