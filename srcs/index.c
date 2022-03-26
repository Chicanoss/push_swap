/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:14:49 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/26 12:02:51 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void ft_index(t_args *stack, int	n)
{
	int i;
	int j;
	
	stack->copy = (int	*)malloc(sizeof(int) * n - 1);
    i = 1;
    while (i < n)
    {
        stack->copy[i] = stack->astack[i];
        i++;
    }
	ft_radixsort(stack->copy, n);
	i = 0; 	/*
			care 
			*/
	j = 0;
	while(i < n)
	{
		while (j < n)
		{
			if(stack->astack[i] == stack->copy[j])
            {
				stack->astack[i] = j;
            }
			j++;
		}
        j = 0;
		i++;
	}
	printf("index ok\n");
}