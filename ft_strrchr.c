/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:31:33 by stafpec           #+#    #+#             */
/*   Updated: 2024/11/15 19:39:18 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;

	last = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last = str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *)last);
}
