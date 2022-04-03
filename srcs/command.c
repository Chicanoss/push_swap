/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:00:42 by rgeral            #+#    #+#             */
/*   Updated: 2022/04/03 14:55:37 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	ft_pb(t_args *s)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = s->astack[0];
	while (i < s->asize - 1)
	{
		s->astack[i] = s->astack[i + 1];
		i++;
	}
	s->asize--;
	s->bsize++;
	i = s->bsize - 1;
	while (0 < i)
	{
		s->bstack[i] = s->bstack[i - 1];
		i--;
	}
	s->bstack[0] = tmp;
}

void	ft_pa(t_args *s)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = s->bstack[0];
	while (i < s->bsize - 1)
	{
		s->bstack[i] = s->bstack[i + 1];
		i++;
	}
	s->bsize--;
	s->asize++;
	i = s->asize - 1;
	while (0 < i)
	{
		s->astack[i] = s->astack[i - 1];
		i--;
	}
	s->astack[0] = tmp;
}

void	ft_push(t_args *stack, char *cmd)
{
	if (ft_strcmp(cmd, "pa") == 0)
	{
		ft_pa(stack);
		write(1, "pa\n", 3);
	}
	if (ft_strcmp(cmd, "pb") == 0)
	{
		ft_pb(stack);
		write(1, "pb\n", 3);
	}
}
