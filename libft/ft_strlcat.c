/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:55:16 by tarini            #+#    #+#             */
/*   Updated: 2024/11/09 15:56:04 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;
	unsigned int	dstlen;
	unsigned int	srclen;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	c = dstlen;
	if (size <= dstlen)
		return (srclen + size);
	while (src[i] && i < size - dstlen - 1)
	{
		dest[c] = src[i];
		c ++;
		i ++;
	}
	dest[c] = 0;
	return (dstlen + srclen);
}
/*
#include <stdio.h>

int	main(void) {
	char dest[5] = "Hello";
	char src[3] = "toi";
	printf("%d\n", ft_strlcat(dest,src, 4));
	printf("%s\n", dest);
	return (0);
}

*/