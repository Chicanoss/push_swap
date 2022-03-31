/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:33:33 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/31 17:12:51 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"


int ft_getMax(int arr[], int n)
{
    int mx = arr[0];
	int i;

	i = 1;
	while (i < n)
	{
		if (arr[i] > mx)
			mx = arr[i];
		i++;
	}
    return mx;
}

bool is_sorted(t_args *stack)
{
	int i;

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
	return(false);

}


void	algo(t_args *stack)
{
	int		i;
	int		j;

	i = 0;
	//printf("asize = %d\n", stack->asize);
	
	if (stack->asize == 3)
		ft_sort_less_than3(stack);
	while (!is_sorted(stack)) // issorted pour définir la fin des opérations => True = tant que b n'est pas vide
	{
		if (i > 6)
			break;
		j = -1;
		while (++j < stack->size )
		{
			if (stack->asize == 3)
			ft_sort_less_than3(stack);
			//if (stack->asize <= 5 && stack->asize > 3)
				//ft_sort_less_than5(&stack);
			// printf("valeur de la stack : %d\n", stack->astack[stack->asize - 1]);
			if ((stack->astack[0] >> i) & 1)
				rotate(stack, "ra");
			else
				ft_push(stack, "pb");
		}
		while (stack->bsize > 0)
			ft_push(stack, "pa");
		//printf("\nvaleur de i :%d | taille de b: %d\n", i, stack->bsize);
		i++;
		
		puts("Result:");
		for (int k = 0; k < stack->size; ++k) {
			dprintf(1, " %d |", stack->astack[k]);
		}
		dprintf(1, "\nStack b (si elle est pas vide:oupsi...) (taille: %d): ", stack->bsize);
		for (int p = 0; p < stack->bsize; ++p) {
			dprintf(1, " %d |", stack->bstack[p]);
		}
		dprintf(1, "\n\n\n");

	}
}
