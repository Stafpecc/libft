/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:15:02 by tarini            #+#    #+#             */
/*   Updated: 2024/11/09 16:47:03 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
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
*/