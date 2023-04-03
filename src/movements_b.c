/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:59:37 by mtoof             #+#    #+#             */
/*   Updated: 2023/02/20 17:21:18 by mtoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_node **stack_a, t_node **stack_b)
{
	t_node	*top;

	if (!*stack_a)
		return ;
	top = *stack_a;
	*stack_a = top->next;
	if (!*stack_b)
		top->next = NULL;
	else
		top->next = *stack_b;
	*stack_b = top;
	ft_printf("pb\n");
}

// void	sb(t_node **stack)
// {
// 	t_node	*top;
// 	int		tmp;

// 	if (!*stack)
// 		return ;
// 	top = *stack;
// 	if (top != NULL && top->next != NULL)
// 	{
// 		tmp = top->next->content;
// 		top->next->content = top->content;
// 		top->content = tmp;
// 		*stack = top;
// 	}
// 	ft_printf("sb\n");
// }

// void	rb(t_node **stack)
// {
// 	t_node	*tmp;
// 	t_node	*top;

// 	if (!*stack)
// 		return ;
// 	tmp = *stack;
// 	top = *stack;
// 	*stack = top->next;
// 	while (tmp->next != NULL)
// 		tmp = tmp->next;
// 	top->next = NULL;
// 	tmp->next = top;
// 	ft_printf("rb\n");
// }

// void	rrb(t_node **stack)
// {
// 	t_node	*bottom;
// 	t_node	*tmp;

// 	if (!*stack)
// 		return ;
// 	bottom = *stack;
// 	tmp = *stack;
// 	while (tmp->next->next != NULL)
// 		tmp = tmp->next;
// 	bottom = tmp->next;
// 	tmp->next = NULL;
// 	bottom->next = *stack;
// 	*stack = bottom;
// 	ft_printf("rrb\n");
// }
