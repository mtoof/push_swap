/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:42:46 by mtoof             #+#    #+#             */
/*   Updated: 2023/02/20 17:20:40 by mtoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	stack_b = NULL;
	stack_a = NULL;
	if (argc > 1 && argv[1][0] != '\0')
	{
		if (ft_check(argc, argv, &stack_a) == -1)
			return (-1);
		if (is_sorted(&stack_a) == -1)
		{
			if (stack_size(&stack_a) <= 5)
				sort_less_or_five(&stack_a, &stack_b);
			else
				sort(&stack_a, &stack_b);
		}
		if (stack_a != NULL)
		{
			while (stack_a->next != NULL)
				pop(&stack_a);
			free(stack_a);
		}
	}
	return (0);
}
