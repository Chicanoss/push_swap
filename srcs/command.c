/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:00:42 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/29 17:36:11 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void ft_push(t_args *stack, char	*cmd)
{
	if (ft_strcmp(cmd, "pa") == 0)
	{
		if(stack->bsize <= 0)
    	{
        	perror("Bsize est inferieur à 0");
        	exit(EXIT_FAILURE);
    	}
		stack->astack[stack->asize] = stack->bstack[stack->bsize - 1];
		stack->asize++;
		stack->bsize--;
		printf("pa\n");
	}
	if (ft_strcmp(cmd, "pb") == 0)
	{
		if(stack->asize <= 0)
    	{
        	perror("Bsize est inferieur à 0");
        	exit(EXIT_FAILURE);
    	}
		stack->bstack[stack->bsize] = stack->astack[stack->asize - 1];
		stack->bsize++;
		stack->asize--;
		printf("pb\n");
	}
}

void swap(t_args	*stack, char	*cmd)
	{
		int	tmp;

		/*tmp = 0;
		while (tmp < stack->asize)
		{
			printf("valeur de stack avant le swap : %d\n", stack->astack[tmp]);
			tmp++;
		}*/
		if (ft_strcmp(cmd, "sa") == 0)
		{
			if(stack->asize < 2)
    		{
        		perror("Swap : Bsize est inferieur à 2");
        		exit(EXIT_FAILURE);
    		}
			tmp = stack->astack[stack->asize - stack->asize];
			//printf("valeur de tmp : %d\n", tmp);
			stack->astack[stack->bsize - stack->bsize] = stack->astack[stack->bsize - stack->bsize + 1];
			//printf("valeur de la première valeur de StackA : %d\n", stack->astack[stack->asize - stack->asize + 1]);
			stack->astack[stack->bsize - stack->bsize + 1] = tmp;
			printf("sa\n");
		}

		if (ft_strcmp(cmd, "sb") == 0)
		{
			if(stack->bsize < 2)
    		{
        		perror("Swap : Bsize est inferieur à 2");
        		exit(EXIT_FAILURE);
    		}
			tmp = stack->bstack[stack->bsize - stack->bsize];
			//printf("valeur de tmp : %d\n", tmp);
			stack->bstack[stack->bsize - stack->bsize] = stack->bstack[stack->bsize - stack->bsize + 1];
			//printf("valeur de la première valeur de StackB : %d\n", stack->bstack[stack->bsize - stack->bsize + 1]);
			stack->bstack[stack->bsize - stack->bsize + 1] = tmp;
			printf("sb\n");
		}
		/*tmp = 0;
		while (tmp < stack->asize)
		{
			printf("valeur de stack après le swap : %d\n", stack->astack[tmp]);
			tmp++;
		}*/
	}
	
	void rotate(t_args *stack, char	*cmd)
	{
		int	tmp;
		int i;

		i = 0;
		if(ft_strcmp(cmd, "ra") == 0)
		{
			if (stack->asize < 2)
			{
				// aled
			}
			tmp = stack->astack[stack->asize - 1];
			//printf("valeur de tmp : %d\n", tmp);
			while (i < stack->asize - 1)
			{
				stack->astack[stack->asize - i - 1] = stack->astack[stack->asize - i - 2];
				//printf("%d prends la valeur de %d\n", stack->astack[(stack->asize - stack->size) + i], stack->astack[(stack->asize - stack->size) + i + 1]);
				i++;
			}
			stack->astack[0] = tmp;
			printf("ra\n");
		}
		if(ft_strcmp(cmd, "rb") == 0)
		{
			if (stack->asize < 2)
			{
				// aled
			}
			tmp = stack->bstack[stack->bsize - 1];
			//printf("valeur de tmp : %d\n", tmp);
			while (i < stack->bsize - 1)
			{
				stack->bstack[stack->bsize - i - 1] = stack->bstack[stack->bsize - i - 2];
				//printf("%d prends la valeur de %d\n", stack->astack[(stack->asize - stack->size) + i], stack->astack[(stack->asize - stack->size) + i + 1]);
				i++;
			}
			stack->bstack[0] = tmp;
			printf("rb\n");
		}
	}
	
