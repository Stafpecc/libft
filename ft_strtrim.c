/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:33:28 by tarini            #+#    #+#             */
/*   Updated: 2024/11/14 12:52:40 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			i;
	char			*result;
	size_t			size;

	i = 0;
	size = ft_strlen(s1);
	result = malloc(sizeof(char *) * (size + 1));
	if (!result)
		return (NULL);
	while (s1[i] != '\0' && i < size - 1)
	{
		if (s1[i] != set)
			result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
