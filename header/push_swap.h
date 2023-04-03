/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:19:51 by mtoof             #+#    #+#             */
/*   Updated: 2023/02/22 16:38:20 by mtoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>

typedef struct s_node
{
	int				content;
	struct s_node	*next;
}				t_node;

typedef struct s_items
{
	int		i;
	int		steps;
	int		stack_a_size;
	int		max_digit;
}	t_items;

void				push(int content, t_node **stack);
void				pop(t_node **stack);
void				display(t_node **stack);
int					ft_check(int argc, char **argv, t_node **stack);
void				ft_init(int argc, char **argv, t_node **stack);
void				sa(t_node **stack);
void				ra(t_node **stack);
void				rra(t_node **stack);
void				pa(t_node **stack_a, t_node **stack_b);
int					is_sorted(t_node **stack);
void				sort(t_node **stack_a, t_node **stack_b);
void				sort_less_or_five(t_node **stack_a, t_node **stack_b);
int					search_for_smallest_index(t_node **stack_a);
void				sb(t_node **stack);
void				pb(t_node **stack_a, t_node **stack_b);
void				rb(t_node **stack);
void				rrb(t_node **stack);
int					stack_size(t_node **stack_a);
void				size_three(t_node **stack_a);
void				sort(t_node **stack_a, t_node **stack_b);
int					ft_largest_num(t_node **stack_a);
long				ft_atol(const char *str);

#endif
