/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:20:06 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/14 15:01:27 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	ft_isdigit(int n)
{
	if (n > INT_MIN && n < INT_MAX)
		return (1);
	else
	{
		perror("not digit");
		exit(EXIT_FAILURE);
	}
}

int ft_check_doubles(int arr[], int n)
{
	int	i;
	int	j;
	int	check;

	check = 1;
	j = 0;
	i = 0;
	while (i < n)
	{
		while(j < n)
		{
			if (arr[i] == arr[j] && check == 0)
			{
				perror("double");
				exit(EXIT_FAILURE);
			}
			if (arr[i] == arr[j])
				check = 0;
			j++;
		}
		check = 1;
		j = 0;
		i++;
	}
	return(1);
}

int	ft_parsing(int	*arr, int	n)
{
	int i;

	i = 0;
	ft_check_doubles(arr, n);
	while (i < n)
	{
		ft_isdigit(arr[i]);
		i++;
	}
	return(1);
}