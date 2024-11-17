/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:51:29 by tarini            #+#    #+#             */
/*   Updated: 2024/11/17 15:53:26 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	struct s_list *current;

	if (lst->next == NULL)
	{
		del(lst);
		free(lst->content);
		free(lst);
		return ;
	}
	*current = *lst;
	while (current->next->next != NULL)
		current = current->next;
	*del(lst->content);
	free(current->next->content);
	free(current->next);
	current->next = NULL;
}