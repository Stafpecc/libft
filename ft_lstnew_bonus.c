/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:16:13 by tarini            #+#    #+#             */
/*   Updated: 2024/11/17 13:46:33 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *myNewList;

	myNewList = malloc(sizeof(t_list));
	if (myNewList == NULL)
		return (NULL);
	myNewList->content = content;
	myNewList->next = NULL;
	return (myNewList);
}
