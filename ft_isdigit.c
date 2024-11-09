/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:15:02 by tarini            #+#    #+#             */
/*   Updated: 2024/11/09 14:35:34 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *nptr)
{   
		int	i;
		int	signe;
		int	result;

		result = 0;
		signe = 1;
		i = 0;
		if (nptr[i++] == '-')
			signe *= -1;
			
		while (nptr[i] >= '0' && nptr[i] <= '9')
		{
				result = result * 10 + (nptr[i] - '0');
				i++;
		}
		result *= signe;
		return (result);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(int ac, char **av) {
	(void)ac;
	char nb = *av[1];
	if (ft_isdigit(nb) >= 1)
		printf("okay from 42 function \n");
	if (isdigit(nb) >= 1)
		printf("okay from orgin function \n");
	printf("%d, %d", ft_isdigit(nb), isdigit(nb));
}
*