/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:42:28 by tarini            #+#    #+#             */
/*   Updated: 2024/11/17 16:44:49 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	struct s_list *current;
	
	if (!lst)
		return ;
	if (!(lst)->next)
	{
		(*f)((lst)->content);
		free(lst);
		lst = NULL;
		return ;
	}
	current = lst;
	while (current->next != NULL)
	{
		(*f)(current->content);
		current = current->next;
	}
	(*f)((lst)->content);
}