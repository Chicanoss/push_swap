/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:14:49 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/27 03:53:11 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void ft_index(t_args *stack, int	n)
{
	int i;
	int j;
	
	stack->copy = (int	*)ft_calloc(sizeof(int), n - 1);
    i = 0;
    while (i < stack->size)
    {
        stack->copy[i] = stack->astack[i];
        i++;
    }
	ft_radixsort(stack->copy, n);
	i = 0;
	/*while (i < stack->size)
	{
		printf("%d\n", stack->copy[i]);
		i++;
	}*/
	i = 0;
	while (i < stack->size)
	{
		printf("valeur de astack :%d\n", stack->astack[i]);
		i++;
	}
	i = 0;
	while (i < stack->size)
	{
		printf("valeur de copy : %d\n", stack->copy[i]);
		i++;
	}
	i = 0; 	/*
			care 
			*/
	j = 0;
	while(i < stack->size)
	{
		while (j < stack->size)
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