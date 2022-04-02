/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:44:38 by rgeral            #+#    #+#             */
/*   Updated: 2022/04/02 16:16:39 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	getmin(int arr[], int n)
{
	int	min;
	int	i;

	min = arr[0];
	i = 1;
	while (i < n)
	{
		if (arr[i] < min)
			min = arr[i];
		i++;
	}
	return (min);
}

void	sort_five(t_args *s)
{
	int	min;
	int	i;

	i = 0;
	min = getmin(s->astack, s->asize);
	while (i < 2)
	{
		if (s->astack[s->asize - 1] == min)
		{
			reverse_rotate(s, "rra");
		}
		else
			while (s->astack[0] != min)
				rotate(s, "ra");
		ft_push(s, "pb");
		min = getmin(s->astack, s->asize);
		ft_sort_less_than3(s);
		i++;
	}
	ft_push(s, "pa");
	ft_push(s, "pa");
}
