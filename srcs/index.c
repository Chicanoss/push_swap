/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:14:49 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/27 13:27:37 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void ft_index(t_args *stack, int	n)
{
	int i;
	int j;
	int	*copy;
	
	copy = (int	*)ft_calloc(sizeof(int), n - 1);
    i = 0;
    while (i < stack->size)
    {
        copy[i] = stack->astack[i];
        i++;
    }
	ft_radixsort(copy, n);
	i = 0; 	/*
			care 
			*/
	j = 0;
	while(i < stack->size)
	{
		while (j < stack->size)
		{
			if(stack->astack[i] == copy[j])
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