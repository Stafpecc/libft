/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:55:30 by stafpec           #+#    #+#             */
/*   Updated: 2024/11/14 12:44:25 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

char	*copy_substring(const char *start, const char *end)
{
	int		i;
	int		len;
	char	*substring;

	i = 0;
	len = end - start;
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	while (i < len)
	{
		substring[i] = start[i];
		i++;
	}
	substring[len] = '\0';
	return (substring);
}

int	ft_count(const char *str, char sep)
{
	int		substring;
	size_t	counter;

	substring = 0;
	counter = 0;
	while (*str)
	{
		if (*str == sep && !substring)
		{
			counter++;
			substring = 1;
		}
		else
			substring = 0;
		str++;
	}
	return (counter);
}

void	free_all(char **result, size_t i)
{
	while (i != 0)
	{
		free(result[i]);
		i--;
	}
	free(result);
}

char	**ft_split(const char *str, char sep)
{
	size_t			i;
	char			**result;
	const char		*start;

	start = NULL;
	i = 0;
	result = malloc(sizeof(char **) * (ft_count(str, sep) + 1));
	if (!result)
		return (NULL);
	while (*str)
	{
		if (!(*str == sep) && !start)
			start = str;
		if ((*str == sep && start))
		{
			result[i++] = copy_substring(start, str);
			if (!result[i - 1])
				free_all(result, i);
			start = NULL;
		}
		str++;
	}
	if (start)
		result[i++] = copy_substring(start, str);
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
