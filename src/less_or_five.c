/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   less_or_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:26:33 by mtoof             #+#    #+#             */
/*   Updated: 2023/02/20 17:06:12 by mtoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	size_three(t_node **stack_a)
{
	t_node	*tmp_a;
	int		first;
	int		second;
	int		third;

	tmp_a = *stack_a;
	while (is_sorted(&tmp_a) != 1)
	{
		first = tmp_a->content;
		second = tmp_a->next->content;
		third = tmp_a->next->next->content;
		if (first > second && first > third)
			ra(&tmp_a);
		else if (first > second && first < third)
			sa(&tmp_a);
		else if (first < second && second > third)
			rra(&tmp_a);
	}
	*stack_a = tmp_a;
}

void	size_four(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp_a;
	t_node	*tmp_b;
	int		smallest_index;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	smallest_index = search_for_smallest_index(stack_a);
	if (smallest_index == 1)
		ra(&tmp_a);
	else if (smallest_index == 2)
	{
		rra(&tmp_a);
		rra(&tmp_a);
	}
	else if (smallest_index == 3)
		rra(&tmp_a);
	pb(&tmp_a, &tmp_b);
	size_three(&tmp_a);
	pa(&tmp_a, &tmp_b);
	*stack_a = tmp_a;
}

void	size_five(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp_a;
	t_node	*tmp_b;
	int		smallest_index;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	smallest_index = search_for_smallest_index(&tmp_a);
	if (smallest_index == 1 || smallest_index == 2)
		ra(&tmp_a);
	if (smallest_index == 2)
		ra(&tmp_a);
	if (smallest_index == 3)
	{
		rra(&tmp_a);
		rra(&tmp_a);
	}
	if (smallest_index == 4)
		rra(&tmp_a);
	pb(&tmp_a, &tmp_b);
	size_four(&tmp_a, &tmp_b);
	pa(&tmp_a, &tmp_b);
	*stack_a = tmp_a;
}

void	sort_less_or_five(t_node **stack_a, t_node **stack_b)
{
	t_node	*tmp_a;
	int		size;

	size = stack_size(stack_a);
	tmp_a = *stack_a;
	if (size == 2)
	{
		if (is_sorted(stack_a) != 1)
			sa(stack_a);
	}
	else if (size == 3)
		size_three(stack_a);
	else if (size == 4)
		size_four(stack_a, stack_b);
	else if (size == 5)
		size_five(stack_a, stack_b);
}
