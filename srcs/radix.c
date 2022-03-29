/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:22:15 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/29 19:48:28 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	getmax(int arr[], int n)
{
	int	mx;
	int	i;

	mx = arr[0];
	i = 1;
	while (i < n - 1)
	{
		if (arr[i] > mx)
			mx = arr[i];
		i++;
	}
	return (mx);
}

void	countsort(int arr[], int n, int exp)
{
	int	output[n - 1];
	int	i;
	int	count[10] = {0};

	i = 0;
	while (i < n - 1)
	{
		count[(arr[i] / exp) % 10]++;
		i++;
	}
	i = 1;
	while (i++ < 10)
		count[i - 1] += count[i - 1];
	i = n - 2;
	while (i >= 0)
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
		i--;
	}
	i = 0;
	while (i++ < n - 1)
		arr[i - 1] = output[i - 1];
}

void	ft_radixsort(int *arr, int n)
{
	int	m;
	int	exp;

	exp = 1;
	m = 0;
	m = getmax(arr, n);
	while (m / exp > 0)
	{
		countsort(arr, n, exp);
		exp *= 10;
	}
}
