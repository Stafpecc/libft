/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:45:52 by tarini            #+#    #+#             */
/*   Updated: 2024/11/10 16:08:17 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;

	if (!dest || !src)
		return (NULL);
	count = 0;
	while (count < n)
	{
		((char *)dest)[count] = ((char *)src)[count];
		count++;
	}
	return (dest);
}

#include <stdio.h>

int main(void) {
	char src[] = "B";
	char dest[] = "0";
	printf("Before : %s\n", dest);
	memcpy(dest, src, 10);
	printf("\nAfter origin function : \n%s", dest);

	char ft_src[] = "B";
	char ft_dest[] = "0";
	ft_memcpy(ft_dest, ft_src, 10);
	printf("\nAfter 42 function : \n%s\n", ft_dest);

	return 0;
}
