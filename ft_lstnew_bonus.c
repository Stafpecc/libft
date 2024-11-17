/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarini <tarini@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:16:13 by tarini            #+#    #+#             */
/*   Updated: 2024/11/17 13:39:54 by tarini           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
	struct s_list *myNewList;

	myNewList = malloc(sizeof(struct s_list));
	if (myNewList == NULL)
		return (1);
	myNewList->content = content;
	myNewList->next = NULL;

	return (myNewList)
}