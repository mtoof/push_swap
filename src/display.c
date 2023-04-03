/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 16:27:16 by mtoof             #+#    #+#             */
/*   Updated: 2023/02/18 09:12:35 by mtoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	display(t_node **stack)
{
	t_node	*temp;

	temp = *stack;
	if (temp == NULL)
	{
		ft_printf("\nStack Underflow\n");
	}
	else
	{
		while (temp->next != NULL)
		{
			ft_printf("%d--->", temp->content);
			temp = temp->next;
		}
		ft_printf("%d\n", temp->content);
	}
}
