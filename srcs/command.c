/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:00:42 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/30 19:05:38 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"


void	ft_error()
{
	perror("command error");
	exit(EXIT_FAILURE);
}
void	ft_push(t_args *stack, char *cmd)
{
	if (ft_strcmp(cmd, "pa") == 0)
	{
		if (stack->bsize <= 0)
			ft_error();
		stack->astack[stack->asize] = stack->bstack[stack->bsize - 1];
		stack->asize++;
		stack->bsize--;
		printf("pa\n");
	}
	if (ft_strcmp(cmd, "pb") == 0)
	{
		if (stack->asize <= 0)
			ft_error();
		stack->bstack[stack->bsize] = stack->astack[stack->asize - 1];
		stack->bsize++;
		stack->asize--;
		printf("pb\n");
	}
}

void	swap(t_args *stack, char *cmd)
{
	int	tmp;

	if (ft_strcmp(cmd, "sa") == 0)
	{
		if (stack->asize < 2)
			ft_error();
		tmp = stack->astack[stack->asize - stack->asize];
		stack->astack[stack->bsize - stack->bsize] = stack->astack[stack->bsize - stack->bsize + 1];
		stack->astack[stack->bsize - stack->bsize + 1] = tmp;
		printf("sa\n");
	}
	if (ft_strcmp(cmd, "sb") == 0)
	{
		if (stack->bsize < 2)
			ft_error();
		tmp = stack->bstack[stack->bsize - stack->bsize];
		stack->bstack[stack->bsize - stack->bsize] = stack->bstack[stack->bsize - stack->bsize + 1];
		stack->bstack[stack->bsize - stack->bsize + 1] = tmp;
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
		tmp = stack->astack[stack->asize - 1];
		while (i < stack->asize - 1)
		{
			stack->astack[stack->asize - i - 1] = stack->astack[stack->asize - i - 2];
			i++;
		}
		stack->astack[0] = tmp;
		printf("ra\n");
	}
	if (ft_strcmp(cmd, "rb") == 0)
	{
		tmp = stack->bstack[stack->bsize - 1];
		while (i < stack->bsize - 1)
		{
			stack->bstack[stack->bsize - i - 1] = stack->bstack[stack->bsize - i - 2];
			i++;
		}
		stack->bstack[0] = tmp;
		printf("rb\n");
	}
}
void	reverse_rotate(t_args *stack,char *cmd)
{
	int	i;
	int	tmp;

	i = 0;
	if (ft_strcmp(cmd, "rra") == 0)
	{
		tmp = stack->astack[0];
		printf("valeur de TMP : %d\n", tmp);
		while (i < stack->asize - 1)
		{
			stack->astack[stack->asize - i] = stack->astack[stack->asize - i - 1];
			i++;
		}
		stack->astack[stack->asize - 1] = tmp;
		printf("rra\n");
	}
}

