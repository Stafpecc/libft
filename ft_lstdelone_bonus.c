/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:23:30 by tarini            #+#    #+#             */
/*   Updated: 2024/11/17 17:30:26 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	struct s_list	*temp;

	temp = lst->next;
	if (!lst)
		return ;
	lst->next = lst->next->next;
	(*del)(lst->content);
	free(lst);
}
