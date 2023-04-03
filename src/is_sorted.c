/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:06:22 by mtoof             #+#    #+#             */
/*   Updated: 2023/02/20 17:05:26 by mtoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_node **stack)
{
	t_node	*tmp;

	tmp = *stack;
	while (tmp->next != NULL)
	{
		if (tmp->content < tmp->next->content)
			tmp = tmp->next;
		else
			return (-1);
	}
	return (1);
}
