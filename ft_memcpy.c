/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:45:52 by tarini            #+#    #+#             */
/*   Updated: 2024/11/09 16:47:05 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;

	if (!dest || !src)
		return 0;
	count = -1;
	while (++count < n)
		((char*)dest)[count] = ((char*)src)[count];
	((char*)dest)[count + 1] = '\0';
	return dest;
}
/*
#include <stdio.h>

int main(void) {
   char src[] = "Geeks";
   char dest[] = "Quiz";
   printf("Before : %s\n", dest);
   memcpy(dest, src, 5);
   printf("\nAfter origin function : \n%s", dest);
   char ft_src[] = "Geeks";
   char ft_dest[] = "Quiz";
   ft_memcpy(ft_dest, ft_src, 5);
   printf("\nAfter 42 function : \n%s\n", ft_dest);
*/