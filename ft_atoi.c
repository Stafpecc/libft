/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:54:30 by tarini            #+#    #+#             */
/*   Updated: 2024/11/09 13:00:56 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av) {
	   
	(void)ac;
    int i = atoi(av[1]);
	int y = ft_atoi(av[1]);
 
    printf("with atoi function i = %d\n", i);
	printf("with 42 atoi function y = %d\n", y);
}
