/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 10:27:56 by tarini            #+#    #+#             */
/*   Updated: 2024/11/14 12:58:37 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	i = 0;
	if (start >= ft_strlen(s))
		return (0);
	result = malloc(sizeof(char *) * (len));
	if (!result)
		return (NULL);
	while (i < len - 1)
	{
		result[i] = s[start + 1];
		i++;
	}
	result[i] = '\0';
	return (result);
}
