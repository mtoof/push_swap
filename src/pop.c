/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:21:34 by mtoof             #+#    #+#             */
/*   Updated: 2023/02/20 17:17:36 by mtoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pop(t_node **stack)
{
	t_node	*tmp_stack;

	if (*stack == NULL)
		return ;
	tmp_stack = *stack;
	*stack = tmp_stack->next;
	free(tmp_stack);
}
