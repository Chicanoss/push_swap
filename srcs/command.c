/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:00:42 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/27 14:53:37 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void ft_pb (t_args *stack)
{

	stack->bstack[stack->bsize] = stack->astack[stack->asize];
	stack->bsize--;
	stack->asize++;

}