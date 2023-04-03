/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:48:47 by mtoof             #+#    #+#             */
/*   Updated: 2023/02/20 16:06:08 by mtoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_node **stack_a, t_node **stack_b)
{
	t_items	item;
	int		max_bin;

	item.stack_a_size = stack_size(stack_a);
	item.i = -1;
	item.max_digit = ft_largest_num(stack_a);
	max_bin = 0;
	while ((item.max_digit >> max_bin) != 0)
		max_bin++;
	while (++item.i < max_bin)
	{
		item.steps = -1;
		while (++item.steps < item.stack_a_size)
		{
			if ((((*stack_a)->content >> item.i) & 1) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
		}
		while (*stack_b != NULL)
			pa(stack_a, stack_b);
	}
}
