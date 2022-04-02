/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:00:42 by rgeral            #+#    #+#             */
/*   Updated: 2022/04/02 16:06:01 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_error(void)
{
	perror("command error");
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
	int	tmp;
	int	i;

	if (ft_strcmp(cmd, "pa") == 0)
	{
		ft_pa(stack);
		printf("pa\n");
	}
	if (ft_strcmp(cmd, "pb") == 0)
	{
		ft_pb(stack);
		printf("pb\n");
	}
}

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
		printf("sa\n");
	}
	if (ft_strcmp(cmd, "sb") == 0)
	{
		if (s->bsize < 2)
			ft_error();
		tmp = s->bstack[s->bsize - s->bsize];
		s->bstack[s->bsize - s->bsize] = s->bstack[s->bsize - s->bsize + 1];
		s->bstack[s->bsize - s->bsize + 1] = tmp;
		printf("sb\n");
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
		printf("ra\n");
	}
	/*if (ft_strcmp(cmd, "rb") == 0)
	{
		tmp = stack->bstack[stack->bsize - 1];
		while (i < stack->bsize - 1)
		{
			stack->bstack[stack->bsize - i - 1] = stack->bstack[stack->bsize - i - 2];
			i++;
		}
		stack->bstack[0] = tmp;
		printf("rb\n");
	}*/
}
void	reverse_rotate(t_args *stack,char *cmd)
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
		printf("rra\n");
	}
}
