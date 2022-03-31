/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:00:42 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/31 15:37:58 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"


void	ft_error()
{
	perror("command error");
	exit(EXIT_FAILURE);
}
ft_pb(t_args *s)
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
ft_pa(t_args *s)
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
	int tmp;
	int i;
	if (ft_strcmp(cmd, "pa") == 0)
	{
		ft_pa(stack);
		//stack->astack[stack->size - stack->asize] = stack->bstack[stack->size - stack->bsize - 1];

		printf("pa\n");
	}

	if (ft_strcmp(cmd, "pb") == 0)
	{
		ft_pb(stack);
		/*stack->bstack[stack->size - stack->bsize - 1] = stack->astack[stack->size - stack->asize ];
		stack->bsize++;
		stack->asize--;*/
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
		tmp = stack->astack[0];
		stack->astack[0] = stack->astack[1];
		stack->astack[1] = tmp;
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
		tmp = stack->astack[0];
		while (i < stack->asize - 1)
		{
			stack->astack[i] = stack->astack[i + 1];
			i++;
		}
		stack->astack[stack->asize - 1] = tmp;
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
			//printf( "%d prends la valeur de %d\n",stack->astack[i - 1], stack->astack[i -2] );
			stack->astack[i] = stack->astack[i + 1];
			i++;
		}
		stack->astack[stack->asize - 1] = tmp;
		printf("rra\n");
	}
}

