/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:00:42 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/23 23:41:25 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void ft_pb (int *astack, int *bstack, int n)
{
	int temp;
	int	temp2;
	int	i;

	temp2 = 0;
	temp = 0;
	temp = astack[1];
	i = 0;
	
	while(i < n - 1)
	{
		bstack[i] = i;
		printf("valeur de stack b avant swap : %d\n", bstack[i]);
		i++;
	}
	i = 0;
	temp = bstack[i + 1];
	bstack[i + 1] = bstack[i];
	bstack[i + 2] = temp;
	i++;
	/*while (i < n - 1)
	{
		bstack[i]

		i++;
	}*/
	i = 0;
	while(i < n - 1)
	{
		printf("valeur de stack b après swap : %d\n", bstack[i]);
		i++;
	}



	/*
	while (astack[i])
	{
		astack[i] = astack[i + 1];
		//printf("valeur de la stack A : %d\n" , astack[i]);
		i++;
	}
	i = 0;
	while(i < n)
	{
		bstack[i] = i;
		printf("%d\n", bstack[i]);
		i++;
	}
	printf("valeur de la stack A : %d\n" , bstack[1]);
	i = 0;
	while (i < n - 1)
	{
		
	}
	i = 0;
	while ( i < n - 1)
	{
		printf("valeur de la stack B : %d\n" , bstack[i]);
		i++;
	}
	*/

}