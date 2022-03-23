/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:00:42 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/23 17:04:10 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void ft_pb (int *astack, int *bstack, int n)
{
	int temp;
	int	i;

	bstack[1] = 1;
	i = 1;
	temp = 0;
	temp = astack[1];
	printf(" valeur de temp : %d\n" , temp);
	while (i < n)
	{
		astack[i] = astack[i + 1];
		i++;
	}
	astack[i] = 0;
	i = 1;
	while ( i < n)
	{
		printf("%d\n" , astack[i]);
		i++;
	}

}