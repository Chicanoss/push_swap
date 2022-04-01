/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:14:49 by rgeral            #+#    #+#             */
/*   Updated: 2022/04/01 17:17:10 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	ft_index(t_args *stack, int n)
{
	int	i;
	int	j;
	int	*copy;

	copy = (int *)ft_calloc(sizeof(int), n - 1);
	i = 0;
	while (i++ < stack->size)
		copy[i - 1] = stack->astack[i - 1];
	copy = ft_sort(copy, n);
	i = 0;
	j = 0;
	/*while ( i < n - 1)
	{
		dprintf(1, "valeur de copy : %d\n", copy[i]);
		i++;
	}*/
	i = 0;
	while (i < stack->size)
	{
		while (j < stack->size)
		{
			if (stack->astack[i] == copy[j])
				stack->astack[i] = j;
			j++;
			dprintf(1, "%p\n", &copy[j]);
		}
		j = 0;
		i++;
	}
}
