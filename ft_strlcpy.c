/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:47:49 by tarini            #+#    #+#             */
/*   Updated: 2024/11/12 15:37:15 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;

	i = -1;
	s = -1;

	if (size == 0)
		return 1;
	while (src[++s])
	if (s == 0)
		return (size);
	while (src[++i] != '\0' && i < size - 1)
		dest[i] = src[i];
	dest[i] = '\0';
	return (s);
}
#include <bsd/string.h>
#include <stdio.h>

int main() 
{
	char src[] = "coucou";
	char dest[10]; ft_memset(dest, 'A', 10);

	printf("    42     function   ==   %d \n", ft_strlcpy(dest, src, 1) == ft_strlen(src) && dest[0] == 'A');
	printf("  origin   function   ==   %d \n", strlcpy(dest, src, 1) == ft_strlen(src) && dest[0] == 'A');
	return (0); 
}
