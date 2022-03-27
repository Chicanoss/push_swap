/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:32:06 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/27 14:58:55 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int main(int   argc, char **argv)
{

	t_args	stack;
	int i;

	stack.bstack = (int	*)ft_calloc(sizeof(int), argc - 1);
	stack.astack = (int	*)ft_calloc(sizeof(int), argc - 1);
	stack.asize = 0;
	stack.bsize = argc - 1;
	stack.size = argc - 1;
    i = 0;
    /*while (i < argc)
    {
        printf("%s\n" , argv[i]);
        i++;
    }
	*/
	i = 0;
    ft_parsing(argv, &stack, argc);
    ft_index(&stack, argc);
	while(i < stack.size)
    {
        printf("%d\n" , stack.astack[i]);
        i++;
    }
	i = 0;
	while (i < stack.size)
	{
		ft_pb (&stack);
		printf("test\n");
		i++;
	}
	i = 0;
	while(i < stack.bsize)
	{
		printf("Stack a : %d\n", stack.astack[i]);
		i++;
	}
	i = 0;
	printf("valeur de asize : %d", stack.asize);
	while(i <= stack.asize)
	{
		printf("Stack b : %d\n", stack.bstack[i]);
		i++;
	}
	//printf("%d", astack[0]);
    //ft_radixsort(arr, n);
   /* while( i < n)
    {
        arr[i] = DecToBase(2, arr[i]);
        i++;
    }*/
    //i = 0;
    //ft_algo(astack, bstack, argc);
    /*while (i < n)
    {
        printf("%d\n" , arr[i]);
        i++;
    }*/

    return 0;
}