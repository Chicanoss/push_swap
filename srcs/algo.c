/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:33:33 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/29 18:40:00 by rgeral           ###   ########.fr       */
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
			if (stack->astack[i] < stack->astack[i + 1])
				return (false);
			i++;
		}
		return (true);

		// while(stack->astack[i] < stack->astack[i + 1] && i < (stack->size - 1))
		// {
		// 	//printf("valeur de i : %d\n" , i );
		// 	if (i == stack->size - 2)
		// 	{
		// 		return(true);
		// 	}
		// 	i++;
		// }
		
	}
	return(false);

}


void	algo(t_args *stack)
{
	int		i;
	int		j;
	int max;

	i = 0;
	max = ft_getMax(stack->astack, stack->size);
	printf("valeur de max : %d\n", max);
	while (!is_sorted(stack)) // issorted pour définir la fin des opérations => True = tant que b n'est pas vide
	{
		j = -1;
		while (++j < stack->size /* && !is_sorted(stack) */)
		{
			/*if (stack->asize <= 5 && stack->asize > 3)
				ft_sort_less_than5(&stack);
			else if (stack->asize == 3)
				ft_sort_less_than3(&stack);*/
			// printf("valeur de la stack : %d\n", stack->astack[stack->asize - 1]);
			if ((stack->astack[stack->asize - 1] >> i) & 1)
				rotate(stack, "ra");
			else
				ft_push(stack, "pb");
		}
		while (stack->bsize > 0)
			ft_push(stack, "pa");
		printf("\nvaleur de i :%d | taille de b: %d\n", i, stack->bsize);
		i++;
		
		puts("Result:");
		for (int k = 0; k < stack->size; ++k) {
			dprintf(1, " %d |", stack->astack[k]);
		}
		dprintf(1, "\nStack b (si elle est pas vide:oupsi...) (taille: %d): ", stack->bsize);
		for (int p = 0; p < stack->bsize; ++p) {
			dprintf(1, " %d |", stack->bstack[p]);
		}
		dprintf(1, "\n");

		// if  (i == 4)
			// break ;
	}
}









    /*int size = n;
    int max_num = n - 1; // the biggest number in a is stack_size - 1
    int max_bits = 0; // how many bits for max_num 
    while ((max_num >> max_bits) != 0) ++max_bits;
    {
        for (int i = 0 ; i < max_bits ; ++i) // repeat for max_bits times
        {
            for(int j = 0 ; j < size ; ++j)
            {
                int num = arr[1]; // top number of A
                if (((num >> i)&1) == 1)
                    printf("ra\n");
        // if the (i + 1)-th bit is 1, leave in stack a
                else
                    printf("PB\n");
        // otherwise push to stack b
            }
        }
    }*/