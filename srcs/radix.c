/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:22:15 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/10 14:45:41 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int getMax(int arr[], int n)
{
    int mx = arr[0];
	int i;

	i = 1;
	while (i < n)
	{
		if (arr[i] > mx)
			mx = arr[i];
		i++;
	}
    return mx;
}

void countSort(int arr[], int n, int exp)
{
    int output[n]; // output array
    int i; 
	int	count[10] = { 0 };
 
    // Store count of occurrences in count[]
	i = 0;
	while (i < n)
	{
		count[(arr[i] / exp) % 10]++;
		i++;
	}
 
    // Change count[i] so that count[i] now contains actual
    //  position of this digit in output[]
	i = 1;
	while (i < 10)
	{
		count[i] += count[i -1];
		i++;
	}
 
    // Build the output array
	i = n - 1;
	while (i >= 0)
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
		i--;
	}
 
    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
	i = 0;
	while (i < n)
	{
		arr[i] = output[i];
		i++;
	}
}
 
// The main function to that sorts arr[] of size n using
// Radix Sort
void print(int arr[], int arrb[], int n)
{
	int i;
	i = 0;

	while (i < n)
	{
		arrb[i] = arr[i];
		printf("%d\n" , arrb[i]);
		i++;
	}
}

void ft_radixsort(int *arr, int *arrb, int n)
{
    // Find the maximum number to know number of digits
    int m;
	int	exp;
	
	exp = 1;
	m = getMax(arr, n);
 
    // Do counting sort for every digit. Note that instead
    // of passing digit number, exp is passed. exp is 10^i
    // where i is current digit number
	while (m / exp > 0)
	{
		countSort(arr, n, exp);
		exp *= 10;
	}
    print(arr,arrb, n);
}
 
// A utility function to print an array
