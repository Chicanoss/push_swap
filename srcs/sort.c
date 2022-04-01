/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:50:15 by rgeral            #+#    #+#             */
/*   Updated: 2022/04/01 17:15:05 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	*ft_sort(int	*copy, int n)
{
	int i;
	int tmp;

	i = 0;

	while(i < n - 2)
	{
		if (copy[i] > copy[i + 1])
		{
			tmp = copy[i + 1];
			copy[i + 1] = copy[i];
			copy[i] = tmp;
			i = 0;
		}
		i++;
	}
	return(copy);
}