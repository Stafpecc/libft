/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stafpec <stafpec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 01:55:30 by stafpec           #+#    #+#             */
/*   Updated: 2024/11/13 01:59:10 by stafpec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>

char    *copy_substring(const char *start, const char *end)
{
    int     i;
    int     len;
    char    *substring;

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

int ft_sep(char c, char sep)
{
    return (c == sep);
}

int ft_count(const char *str, char sep)
{
    int substring;
    int counter;

    substring = 0;
    counter = 0;
    while (*str)
    {
        if (!ft_sep(*str, sep))
        {
            if (!substring)
            {
                counter++;
                substring = 1;
            }
        }
        else
            substring = 0;
        str++;
    }
    return (counter);
}

void ft_split_end(const char *start, char **result, const char *str, int i)
{
    if (start)
        result[i++] = copy_substring(start, str);
    result[i] = NULL;
}

char **ft_split(const char *str, char sep)
{
    int     i;
    char    **result;
    const char  *start;

    start = NULL;
    i = 0;
    result = (char **)malloc(sizeof(char *) * (ft_count(str, sep) + 1));
    if (!result)
        return (NULL);
    while (*str)
    {
        if (!ft_sep(*str, sep))
            if (!start)
                start = str;
        if (ft_sep(*str, sep))
        {
            if (start)
                result[i++] = copy_substring(start, str);
            start = NULL;
        }
        str++;
    }
    ft_split_end(start, result, str, i);
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
