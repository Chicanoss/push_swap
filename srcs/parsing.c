/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:20:06 by rgeral            #+#    #+#             */
/*   Updated: 2022/04/01 16:44:46 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

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
			{
				perror("Error doubles");
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
	return (1);
}

int	ft_check_order(int	*arr, int n)
{
	int	i;

	i = 0;
	if (n <= 2)
	{
		perror("Not enough numbers");
		exit(EXIT_FAILURE);
	}
	while (arr[i] < arr[i + 1])
	{
		if (i == n - 3)
		{
			perror("in order");
			exit(EXIT_FAILURE);
		}
		i++;
	}
	return (1);
}

int	ft_check_char(char	**arr)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (arr[i])
	{
		while (arr[i][j])
		{
			if ((arr[i][j] >= 48 && arr[i][j] <= 57) || arr[i][0] == '-')
				j++;
			else
			{
				perror("not digit");
				exit(EXIT_FAILURE);
			}
		}
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
	i = 0;
	ft_check_order(stack->astack, n);
	ft_check_doubles(stack->astack, n);
	printf("parsing ok\n");
	return (stack->astack);
}
