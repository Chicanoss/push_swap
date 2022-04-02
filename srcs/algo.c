/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:33:33 by rgeral            #+#    #+#             */
/*   Updated: 2022/04/02 15:56:05 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

bool	is_sorted(t_args *stack)
{
	int	i;

	i = 0;
	if (stack->asize == stack->size)
	{
		while (i < (stack->size - 1))
		{
			if (stack->astack[i] > stack->astack[i + 1])
				return (false);
			i++;
		}
		return (true);
	}
	return (false);
}

void	algo(t_args *stack)
{
	int		i;
	int		j;

	i = 0;
	while (!is_sorted(stack))
	{
		j = -1;
		while (++j < stack->size && !is_sorted(stack))
		{
			if (stack->asize <= 5 && stack->asize > 3)
				sort_five(stack);
			else if (stack->asize == 3)
				ft_sort_less_than3(stack);
			else if ((stack->astack[0] >> i) & 1)
				rotate(stack, "ra");
			else
				ft_push(stack, "pb");
		}
		while (stack->bsize > 0)
			ft_push(stack, "pa");
		i++;
	}
}
