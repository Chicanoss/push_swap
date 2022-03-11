/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:32:06 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/11 11:24:01 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int main()
{
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 , 32};
	int *arrb;
    int n = sizeof(arr) / sizeof(arr[0]);

	arrb = (int	*)malloc(sizeof(int) * n);
     
      // Function Call
      ft_radixsort(arr, arrb, n);
	  printf("\n10 en binaire  : %d", DecToBase(2, 10));
    return 0;
}