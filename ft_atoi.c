/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:54:30 by tarini            #+#    #+#             */
/*   Updated: 2024/11/09 16:46:59 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_passwhitespace(int i, const char *str)
{
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
				str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
}

int	ft_atoi(const char *nptr)
{   
		int	i;
		int	sign;
		int	result;
		result = 0;
		sign = 1;
		if (!nptr)
			return 0;
		i = ft_passwhitespace(i, *nptr);
		if (nptr[i] == '-')
		{
			sign *= -1;
			i++;
		}	
		while (ft_isdigit(nptr[i]))
		{
				result = result * 10 + (nptr[i] - '0');
				i++;
		}
		result *= sign;
		if (result > 2147483646)
			return -1;
		else if (result < -2147483648)
			return 0;
		return ((int)result);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av) {
	(void)ac;
    int i = atoi(av[1]);
	int y = ft_atoi(av[1]);
 
    printf("with atoi function i = %d\n", i);
	printf("with 42 atoi function y = %d\n", y);
}
*/