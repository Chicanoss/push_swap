/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:14:49 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/14 13:13:41 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void ft_index(int	*arr, int	n)
{
	int i;
	int j;
	int *copy;
	
	copy = (int	*)malloc(sizeof(int) * n);
    i = 0;
    while (i < n)
    {
        copy[i] = arr[i];
        i++;
    }
	ft_radixsort(copy, n);
	i = 0;
	j = 0;
	while(i < n)
	{
		while (j < n)
		{
			if(arr[i] == copy[j])
            {
				arr[i] = j;
            }
			j++;
		}
        j = 0;
		i++;
	}
}