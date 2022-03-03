/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:32:06 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/03 12:03:17 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
void ft_radixsort(int arr[], int n)
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
}
 
// A utility function to print an array
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
 
// Driver Code
int main()
{
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 , 32};
	int *arrb;
    int n = sizeof(arr) / sizeof(arr[0]);

	arrb = (int	*)malloc(sizeof(int) * n);
     
      // Function Call
      ft_radixsort(arr, n);
    print(arr,arrb, n);
    return 0;
}