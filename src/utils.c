/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:43:04 by mtoof             #+#    #+#             */
/*   Updated: 2023/02/20 16:05:19 by mtoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_size(t_node **stack_a)
{
	t_node	*top;
	int		size;

	size = 0;
	if (*stack_a != NULL)
	{
		top = *stack_a;
		while (top->next != NULL)
		{
			size++;
			top = top->next;
		}
		if (top->next == NULL)
			size++;
	}
	return (size);
}

int	search_for_smallest_index(t_node **stack_a)
{
	t_node	*tmp_a;
	int		smallest;
	int		counter;
	int		index;

	tmp_a = NULL;
	tmp_a = *stack_a;
	smallest = tmp_a->content;
	index = 0;
	counter = 0;
	while (tmp_a->next != NULL)
	{
		tmp_a = tmp_a->next;
		counter++;
		if (tmp_a->content < smallest)
		{
			smallest = tmp_a->content;
			index = counter;
		}
	}
	return (index);
}

int	ft_largest_num(t_node **stack_a)
{
	t_node	*tmp_a;
	int		largest;

	tmp_a = NULL;
	tmp_a = *stack_a;
	largest = tmp_a->content;
	while (tmp_a->next != NULL)
	{
		tmp_a = tmp_a->next;
		if (tmp_a->content > largest)
			largest = tmp_a->content;
	}
	return (largest);
}
