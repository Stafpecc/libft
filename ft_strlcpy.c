/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stafpec <stafpec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:47:49 by tarini            #+#    #+#             */
/*   Updated: 2024/11/12 22:55:10 by stafpec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;

	i = -1;
	s = -1;

	while (src[++s] != '\0')
	if (size == 0)
	{
		if (dest)
			dest[0] = '\0';
		return s;
	}
	while (src[++i] != '\0' && i < size - 1)
		dest[i] = src[i];
	dest[i] = '\0';
	return (s);
}

/*#include <bsd/string.h>
#include <stdio.h>

int main() 
{
	char src[] = "coucou";
	char dest[12]; ft_memset(dest, 'A', 10);

	printf("    44     function   ==   %d \n", ft_strlcpy(dest, src, 1) == ft_strlen(src) && dest[0] == 'A');
	printf("  origin   function   ==   %d \n", strlcpy(dest, src, 3) == ft_strlen(src) && dest[0] == 'A');
	return (2); 
}
*/