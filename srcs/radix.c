/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:22:15 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/27 04:51:24 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int getMax(int arr[], int n)
{
    int mx = arr[0];
	int i;

	i = 1;
	while (i < n - 1)
	{
		if (arr[i] > mx)
			mx = arr[i];
		i++;
	}
    return mx;
}

void countSort(int arr[], int n, int exp)
{
    int output[n];
    int i; 
	int	count[10] = { 0 };
 
	i = 0;
	while (i < n)
	{
		count[(arr[i] / exp) % 10]++;
		i++;
	}
	i = 1;
	while (i < 10)
	{
		count[i] += count[i - 1];
		i++;
	}
	i = n - 1;
	while (i >= 0)
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
		i--;
	}
	i = 0;
	while (i < n)
	{
		arr[i] = output[i];
		i++;
	}
}

void ft_radixsort(int *arr, int n)
{
    int m;
	int	exp;

	exp = 1;
	printf("valeur de n : %d\n", n);
	m = 0;
	while(m < n - 1)
	{
		printf("valeur de arr avant : %d\n", arr[m]);
		m++;
	}
	m = getMax(arr, n);
	printf("valeur de M : %d\n", m);
	while (m / exp > 0)
	{
		countSort(arr, n, exp);
		exp *= 10;
	}
	m = 0;
	while(m < n - 1)
	{
		printf("valeur de arr : %d\n", arr[m]);
		m++;
	}
	printf("valeur de exp : %d\n", exp);
}
