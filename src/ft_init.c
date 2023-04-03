/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 23:11:17 by mtoof             #+#    #+#             */
/*   Updated: 2023/02/22 16:33:23 by mtoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_find_pos(char **argv, int limit, int i, t_node **stack)
{
	int	state;
	int	j;
	int	position;
	int	content;

	state = i;
	while (i >= limit)
	{
		content = ft_atoi(argv[i]);
		position = 0;
		j = state;
		while (j >= limit)
		{
			if (content < ft_atoi(argv[j]) || content == ft_atoi(argv[j]))
				j--;
			else if (content > ft_atoi(argv[j]))
			{
				position++;
				j--;
			}
		}
		push(position, stack);
		i--;
	}
}

void	ft_init(int argc, char **argv, t_node **stack)
{
	int	i;

	if (argc > 2)
	{
		i = argc - 1;
		ft_find_pos(argv, 1, i, stack);
	}
	else
	{
		i = 0;
		while (argv[i] != NULL)
			i++;
		i--;
		ft_find_pos(argv, 0, i, stack);
	}
}
