/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:22:27 by tarini            #+#    #+#             */
/*   Updated: 2024/11/09 13:20:53 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void ft_bzero(void *s, size_t n)
{
	size_t count;

	count = -1;
	while (++count < n)
		((char*)s)[count] = 0;
}

#include <stdio.h>

int main( void ) {
	char buffer[] = "Shhhhht ! Sorry, I had no idea";
	printf("Before                 : %s\n", buffer);
	bzero(buffer, NULL);
	printf("After origin function  : %s\n", buffer);
	char ft_buffer[] = "Shhhhht ! Sorry, I had no idea";
	ft_bzero(buffer, NULL);
	printf("After 42 function      : %s\n", buffer);
}