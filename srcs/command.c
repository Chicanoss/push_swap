/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:00:42 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/27 15:14:07 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void ft_pb (t_args *stack)
{
    if(stack->asize < 0)
        printf("Asize est inferieur à 0");
	stack->bstack[stack->bsize] = stack->astack[stack->asize - 1];
	stack->bsize++;
	stack->asize--;
}

void ft_pa (t_args *stack)
{
    if(stack->bsize < 0)
        printf("Bsize est inferieur à 0");
	stack->astack[stack->asize] = stack->bstack[stack->bsize - 1];
	stack->asize++;
	stack->bsize--;
}