/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:20:06 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/16 18:49:03 by rgeral           ###   ########.fr       */
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

int	ft_atoi(const char	*str)
{
	int	i;
	int	neg;
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
				perror("Error");
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
int	ft_check_numbers(int	n)
{
	if (n <= 1)
	{
		perror("Not enough numbers");
		exit(EXIT_FAILURE);
	}
	return(1);
}

int ft_check_order(int	*arr, int n)
{
	int i;
	int	count;

	count = 0;
	i = 0;
	while (i < n)
	{
		if(arr[i] < arr[i + 1])
			count++;
		i++;
	}
	if (count == n)
	{
		perror("numbers in order");
		exit(EXIT_FAILURE);
	}
	return(1);
}

int	ft_parsing(char	*arr, int	n)
{
	int i;
	int	*ntm;

	ntm = (int	*)malloc(sizeof(int) * n);
	i = 0;
	printf("%s\n", arr);
	/*
	//ntm = ft_atoi(arr);
	//ft_check_numbers(n);
	ft_check_order(arr, n);
	ft_check_doubles(arr, n);
	while (i < n)
	{
		ft_isdigit(arr[i]);
		i++;
	}
	
	printf("parsing ok\n");
	*/
	return(1);
}