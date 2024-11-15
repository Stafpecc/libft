/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stafpec <stafpec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:55:30 by stafpec           #+#    #+#             */
/*   Updated: 2024/11/15 13:47:45 by stafpec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *copy_substring(const char *start, const char *end)
{
    size_t len = end - start;
    char *substring = (char *)malloc((len + 1) * sizeof(char));
    if (!substring)
        return NULL;
    ft_memcpy(substring, start, len);
    substring[len] = '\0';
    return substring;
}

void free_all(char **result, size_t i)
{
    while (i > 0)
    {
        free(result[--i]);
    }
    free(result);
}

int	ft_count(const char *str, char sep)
{
	int count = 0;
	int in_substring = 0;

	while (*str)
	{
		if (*str == sep)
			in_substring = 0;
		else if (!in_substring)
		{
			count++;
			in_substring = 1;
		}
		str++;
	}
	return (count);
}

char		**ft_split(const char *str, char sep)
{
	char	**result;
	size_t	i = 0;
	const char	*start;

	result = malloc(sizeof(char *) * (ft_count(str, sep) + 1));
	if (!result)
		return (NULL);
	start = NULL;
	while (*str)
	{
		if (*str != sep && !start)
			start = str;
		else if (*str == sep && start)
		{
			result[i] = ft_substr(start, 0, str - start);
			start = NULL;
			i++;
		}
		str++;
	}
	if (start)
		result[i++] = ft_substr(start, 0, str - start);
	result[i] = NULL;
	return (result);
}





/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Bonjour ! Je suis content, mais je dois faire split.";
	char	charset[] = "!,.";
	char	**result = ft_split(str, charset);
	int	i = 0;
	
	printf("nombre de str : %d\n", ft_count(str, charset));
	while (result[i])
	{
		printf("\n%s", result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
