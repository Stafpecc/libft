/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:18:07 by tarini            #+#    #+#             */
/*   Updated: 2024/11/11 16:43:01 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"

void *calloc(size_t elementCount, size_t elementSize)
{
	if (!elementCount)
		return (NULL);
	malloc(sizeof (elementSize));
	ft_bzero(elementSize, elementCount);
}

#include <stdio.h>          
#include <stdlib.h>
#include <assert.h>

int main() {
    
    int i;
    int *pointer = (int *) ft_calloc(10, sizeof(int));

    assert(pointer != NULL);
    for ( i=0; i<10-1; i++ ) {
        pointer[i] = i;
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", pointer[i]);
    }
    printf("\n");
    free(pointer);
    return 0;
}  */