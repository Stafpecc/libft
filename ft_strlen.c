/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:07:34 by tarini            #+#    #+#             */
/*   Updated: 2024/11/10 19:24:17 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	if (!s)
		return 0;

	count = 0;
	while (s[count] != '0')
		count++;
	return (count);
}
/*
int	main(void) {
	char	string[] = "Hello les coupaings";
	printf("%d", ft_strlen(string));
}
*/