/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 18:41:41 by tarini            #+#    #+#             */
/*   Updated: 2024/11/15 18:18:26 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}



/*
#include <stdio.h>

int main(void) {
	const char *str = "Hello, world!";
	char c = 'w';
	char *result = ft_strchr(str, c);

	if (result != NULL) {
		printf("'%c' find in %ld.\n", c, result - str);
	} else {
		printf("'%c' not find\n", c);
	}
	return 0;
}
*/