/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:32:06 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/14 15:02:25 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int main()
{
    int arr[] = { 3, 2, 2, 1, 5};
	int *arrb;
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    i = 0;
	arrb = (int	*)malloc(sizeof(int) * n);
	ft_parsing(arr, n);
    //ft_index(arr, n);
   /* while( i < n)
    {
        printf("%d\n" , arr[i]);
        i++;
    }*/
    //ft_radixsort(arr, n);
   /* while( i < n)
    {
        arr[i] = DecToBase(2, arr[i]);
        i++;
    }*/
    i = 0;
    //ft_algo(arr, arrb, n);
    /*while (i < n)
    {
        printf("%d\n" , arr[i]);
        i++;
    }*/

    return 0;
}