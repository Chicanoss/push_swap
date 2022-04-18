/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:55:29 by rgeral            #+#    #+#             */
/*   Updated: 2022/04/18 16:10:40 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	ft_round(char **arr, int i, int j, int count)
{
	while (arr[i])
	{
		while (arr[i][j])
		{
			if (arr[i][0] == '-' && !arr[i][1])
				ft_error();
			if ((arr[i][j] > 47 && arr[i][j] < 58) |
			(arr[i][0] == '-' && count == 1) | (arr[i][0] == '+' && count == 1))
			{
				if (arr[i][0] == '-' | arr[i][0] == '+')
					count = 0;
				j++;
			}
			else
				ft_error();
		}
		count = 1;
		j = 0;
		i++;
	}
	return (1);
}
