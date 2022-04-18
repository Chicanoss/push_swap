/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:14:49 by rgeral            #+#    #+#             */
/*   Updated: 2022/04/18 12:56:49 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	index_process(t_args *stack, int *copy)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < stack->size)
	{
		while (j < stack->size)
		{
			if (stack->astack[i] == copy[j])
			{
				stack->astack[i] = j;
				break ;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	ft_index(t_args *stack, int n)
{
	int	i;
	int	*copy;

	copy = (int *)ft_calloc(sizeof(int), n - 1);
	i = 0;
	while (i++ < stack->size)
		copy[i - 1] = stack->astack[i - 1];
	copy = ft_sort(copy, n);
	index_process(stack, copy);
	free(copy);
}
