/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:54:46 by mtoof             #+#    #+#             */
/*   Updated: 2023/02/18 09:13:39 by mtoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_node	*ft_create_node(int content)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

void	push(int content, t_node **stack)
{
	t_node	*new_node;

	new_node = ft_create_node(content);
	if (!new_node)
		return ;
	if (!*stack)
	{
		new_node->next = NULL;
		*stack = new_node;
		return ;
	}
	else
		new_node->next = *stack;
	*stack = new_node;
}
