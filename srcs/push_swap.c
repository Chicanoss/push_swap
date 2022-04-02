/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:32:06 by rgeral            #+#    #+#             */
/*   Updated: 2022/04/01 18:15:17 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int main(int   argc, char **argv)
{

	t_args	stack;
	int i;
    int *base_copy;

    base_copy = (int    *)ft_calloc(sizeof(int), argc - 1);
	stack.bstack = (int	*)ft_calloc(sizeof(int), argc - 1);
	stack.astack = (int	*)ft_calloc(sizeof(int), argc - 1);
	stack.asize = argc - 1;
	stack.bsize = 0;
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
    i = 0;
    /*while (i < stack.size)
    {
        base_copy[i] = stack.astack[i];
        printf("valeur de copy base : %d\n", base_copy[i]);
        base_copy[i] = DecToBase(2, base_copy[i]);
        printf("Valeur de Astack en binaire : %d\n", base_copy[i]);
        i++;
    }
	*/
	algo(&stack);
	//ft_sort_less_than3(&stack);
	//sort_five(&stack);
    /*printf("valeur de asize : %d\n", stack.asize);
    printf("valeur de size : %d\n", stack.size);
    */
   /*i = 0;
   while (i < 1)
   {
	   reverse_rotate(&stack, "rra");
	   i++;
   }*/
   
    
	i = 0;
	/*while (i < stack.size)
	{
		ft_push(&stack, "pb");
		i++;
	}*/
    //i = 0;
    /*i = 0;
    while (i < 2)
	{
		ft_push(&stack, "pa");
		i++;
	}*/
    
    /*i = 0;
    while (i < 1)
    {
        rotate(&stack, "ra");
        i++;
    }*/
/*
    i = 0;
    while(i < 1)
    {
        swap(&stack, "sa");
        i++;
    }
    */
	/*i = 0;
	while(i < stack.asize)
	{
		printf("Stack a : %d |", stack.astack[i]);
		i++;
	}
	printf("\n");
	i = 0;
	//printf("valeur de asize : %d\n", stack.asize);
	while(i < stack.bsize)
	{
		printf("Stack b : %d |", stack.bstack[i]);
		i++;
	}*/
    free(stack.bstack);
    free(stack.astack);
    free(base_copy);

    return 0;
}