/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:10:44 by tarini            #+#    #+#             */
/*   Updated: 2024/11/17 16:39:43 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	struct s_list *current;
	
	if (!*lst)
		return ;
	if (!(*lst)->next)
	{
		(*del)((*lst)->content);
		free(*lst);
		*lst = NULL;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
	{
		(*del)(current->content);
		current = current->next;
	}
	(*del)((*lst)->content);
	free(current);
}