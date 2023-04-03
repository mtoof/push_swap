/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoof <mtoof@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 18:25:59 by mtoof             #+#    #+#             */
/*   Updated: 2023/02/22 16:32:48 by mtoof            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_check_dup(char **args, int index)
{
	int		i;
	int		j;
	long	number;

	i = index;
	while (args[i])
	{
		number = ft_atol(args[i]);
		if (number > 2147483647 || number < -2147483648)
			return (-1);
		j = i + 1;
		while (args[j])
		{
			if (ft_atol(args[j]) == number)
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

static int	ft_check_digit(char **args, int index)
{
	int	j;
	int	i;

	i = index;
	while (args[i])
	{
		j = 0;
		if (args[i][j] == '-' || args[i][j] == '+')
		{
			j++;
			if (args[i][j] == '\0')
				return (-1);
		}
		while (args[i][j])
		{
			if (ft_isdigit(args[i][j]) == 1)
				j++;
			else
				return (-1);
		}
		i++;
	}
	return (ft_check_dup(args, index));
}

int	ft_check_args_chr(int argc, char **argv, t_node **stack)
{
	if (ft_check_digit(argv, 1) == 1 && ft_check_dup(argv, 1) == 1)
		ft_init(argc, argv, stack);
	else
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	return (1);
}

void	ft_free(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
	args = NULL;
	return ;
}

int	ft_check(int argc, char **argv, t_node **stack)
{
	char	**args;

	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		if (!*args)
			exit(0);
		if (ft_check_digit(args, 0) == 1 && ft_check_dup(args, 0) == 1)
		{
			ft_init(argc, args, stack);
			ft_free(args);
		}
		else
		{
			ft_free(args);
			write(2, "Error\n", 6);
			return (-1);
		}
	}
	else
		return (ft_check_args_chr(argc, argv, stack));
	return (1);
}
