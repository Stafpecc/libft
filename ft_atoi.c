/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:54:30 by tarini            #+#    #+#             */
/*   Updated: 2024/11/10 14:29:27 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

int	ft_pass(int i, const char *str, int *s)
{
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*s = -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *nptr)
{   
	int	i;
	int	sign;
	int	result;

	if (!nptr)
		return (0);
	i = 0;
	sign = 1;
	result = 0;
	i = ft_pass(i, nptr, &sign);
	while (ft_isdigit(nptr[i]))
	{
		if (result>(2147483647-(nptr[i]-'0'))/10)
		{
			if (sign == -1 && result > (2147483648-(nptr[i]-'0'))/10)
				return 0;
			else if (sign == 1)
				return -1;
		}
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av) {
	(void)ac;
    int i = atoi(av[1]);
	int y = ft_atoi(av[1]);
 
    printf("with atoi function i = %d\n", i);
	printf("with 42 atoi function y = %d\n", y);
	return 0;
}
*/