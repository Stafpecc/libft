/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:07:34 by tarini            #+#    #+#             */
/*   Updated: 2024/11/10 16:08:13 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '0')
		count++;
	return (count);
}

int	main(void) {
	
}
