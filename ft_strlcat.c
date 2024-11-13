/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:55:16 by tarini            #+#    #+#             */
/*   Updated: 2024/11/13 15:22:43 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dstlen;
	unsigned int	srclen;
	unsigned int	i;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (size + srclen);
	i = -1;
	while (src[++i] != '\0' && (dstlen + i) < (size - 1))
		dest[dstlen + i] = src[i];
	dest[dstlen + i] = '\0';
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