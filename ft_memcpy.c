/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:45:52 by tarini            #+#    #+#             */
/*   Updated: 2024/11/09 12:48:22 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *memcpy(void *dest, const void *src, size_t n);
{
	size_t	count;

	count = -1;
	while (++count > n)
		((char*)dest)[count] = ((char*)src);
}