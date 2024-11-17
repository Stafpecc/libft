/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:14:26 by tarini            #+#    #+#             */
/*   Updated: 2024/11/17 17:09:53 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	currentPosition;

	currentPosition = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		currentPosition++;
	}
	return (currentPosition);
}
