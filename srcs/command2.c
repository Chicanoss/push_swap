/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 14:51:12 by rgeral            #+#    #+#             */
/*   Updated: 2022/04/03 15:20:31 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	swap(t_args *s, char *cmd)
{
	int	tmp;

	if (ft_strcmp(cmd, "sa") == 0)
	{
		if (s->asize < 2)
			ft_error();
		tmp = s->astack[0];
		s->astack[0] = s->astack[1];
		s->astack[1] = tmp;
		write(1, "sa\n", 3);
	}
	if (ft_strcmp(cmd, "sb") == 0)
	{
		if (s->bsize < 2)
			ft_error();
		tmp = s->bstack[s->bsize - s->bsize];
		s->bstack[s->bsize - s->bsize] = s->bstack[s->bsize - s->bsize + 1];
		s->bstack[s->bsize - s->bsize + 1] = tmp;
		write(1, "sb\n", 3);
	}
}

void	rotate(t_args *stack, char *cmd)
{
	int	tmp;
	int	i;

	i = 0;
	if (ft_strcmp(cmd, "ra") == 0)
	{
		tmp = stack->astack[0];
		while (i < stack->asize - 1)
		{
			stack->astack[i] = stack->astack[i + 1];
			i++;
		}
		stack->astack[stack->asize - 1] = tmp;
		write(1, "ra\n", 3);
	}
}

void	reverse_rotate(t_args *stack, char *cmd)
{
	int	i;
	int	tmp;

	i = stack->asize - 1;
	if (ft_strcmp(cmd, "rra") == 0)
	{
		tmp = stack->astack[stack->asize - 1];
		while (i > 0)
		{
			stack->astack[i] = stack->astack[i - 1];
			i--;
		}
		stack->astack[0] = tmp;
		write(1, "rra\n", 4);
	}
}
