/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:20:06 by rgeral            #+#    #+#             */
/*   Updated: 2022/04/06 17:33:36 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"
#include <stdio.h>
/*
	penser à check les "-" dans les argument : "-00-02" Quand il y a un "-" ça fais bug tout le chiffre -00k2

*/
int	ft_atoi(const char	*str)
{
	int			i;
	int			neg;
	long int	temp;

	neg = 1;
	i = 0;
	temp = 0;
	if (str[i] == '-' || str[i] == '+')
	{	
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		temp = temp * 10 + str[i] - '0';
		i++;
	}
	if ((temp * neg) > INT_MAX || (temp * neg) < INT_MIN)
		ft_error();
	return (temp * neg);
}

int	ft_check_doubles(int arr[], int n)
{
	int	i;
	int	j;
	int	check;

	check = 1;
	j = 0;
	i = 0;
	while (i < n - 1)
	{
		while (j < n - 1)
		{
			if (arr[i] == arr[j] && check == 0)
				ft_error();
			if (arr[i] == arr[j])
				check = 0;
			j++;
		}
		check = 1;
		j = 0;
		i++;
	}
	return (1);
}

int	ft_check_order(int	*arr, int n)
{
	int	i;

	i = 0;
	if (n <= 2)
		exit(EXIT_FAILURE);
	while (arr[i] < arr[i + 1])
	{
		if (i == n - 3)
			exit(EXIT_FAILURE);
		i++;
	}
	return (1);
}

int	ft_check_char(char	**arr)
{
	int	i;
	int	j;
	int	count;

	count = 1;
	i = 1;
	j = 0;
	while (arr[i])
	{
		while (arr[i][j])
		{
			if ((arr[i][j] >= 48 && arr[i][j] <= 57) || (arr[i][0] == '-' && count == 1)) /* problème dans la condition ; toujours vraie */
			{
				if (arr[i][0] == '-')
					count = 0;
				//printf("valeur de arr de [%d][%d] : %d\n", i, j , arr[i][j]);
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

int	*ft_parsing(char **arr, t_args *stack, int n)
{
	int	i;
	int	j;

	ft_check_char(arr);
	i = 1;
	j = 0;
	while (i < n)
	{
		stack->astack[j] = ft_atoi(arr[i]);
		i++;
		j++;
	}
	ft_check_order(stack->astack, n);
	ft_check_doubles(stack->astack, n);
	return (stack->astack);
}
