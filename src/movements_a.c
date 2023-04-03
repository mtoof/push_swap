/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:35:22 by mtoof             #+#    #+#             */
/*   Updated: 2023/02/18 11:34:23 by mtoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **stack)
{
	t_node	*top;
	int		tmp;

	if (!*stack)
		return ;
	top = *stack;
	if (top != NULL && top->next != NULL)
	{
		tmp = top->next->content;
		top->next->content = top->content;
		top->content = tmp;
		*stack = top;
	}
	ft_printf("sa\n");
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	t_node	*top;

	if (!*stack_b)
		return ;
	top = *stack_b;
	*stack_b = top->next;
	if (!*stack_a)
		top->next = NULL;
	else
		top->next = *stack_a;
	*stack_a = top;
	ft_printf("pa\n");
}

void	ra(t_node **stack)
{
	t_node	*tmp;
	t_node	*top;

	if (!*stack)
		return ;
	tmp = *stack;
	top = *stack;
	*stack = top->next;
	while (tmp->next != NULL)
		tmp = tmp->next;
	top->next = NULL;
	tmp->next = top;
	ft_printf("ra\n");
}

void	rra(t_node **stack)
{
	t_node	*bottom;
	t_node	*tmp;

	if (!*stack)
		return ;
	bottom = *stack;
	tmp = *stack;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	bottom = tmp->next;
	tmp->next = NULL;
	bottom->next = *stack;
	*stack = bottom;
	ft_printf("rra\n");
}
