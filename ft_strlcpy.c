/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:47:49 by tarini            #+#    #+#             */
/*   Updated: 2024/11/12 14:47:53 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	if (s == 0)
		return (size);
	while (src[i] != '\0' && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (s);
}

/*
#include <stdio.h> 
int main() 
{ 
	char	src[] = "HelloHello"; 
	char	dest[] = "Coucou les coupaings"; 
	unsigned int	size = 7;

	printf("%d\n", ft_strlcpy(dest, src, size)); 
	printf("%s\n", dest); 
	return (0); 
}
*/