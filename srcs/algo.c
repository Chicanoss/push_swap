/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeral <rgeral@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 13:33:33 by rgeral            #+#    #+#             */
/*   Updated: 2022/03/13 10:13:58 by rgeral           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void ft_algo (int    *arr,int *arrb, int n)
{
    int i;
    int temp;

    i = 0;
    while (i < n)
    {
        while (arr[i] > 10)
        {
            temp = arr[i] / 10;
            if(temp < 10)
                break;
        }
        i++;
    }
    arrb[1] = 1;









    /*int size = n;
    int max_num = n - 1; // the biggest number in a is stack_size - 1
    int max_bits = 0; // how many bits for max_num 
    while ((max_num >> max_bits) != 0) ++max_bits;
    {
        for (int i = 0 ; i < max_bits ; ++i) // repeat for max_bits times
        {
            for(int j = 0 ; j < size ; ++j)
            {
                int num = arr[1]; // top number of A
                if (((num >> i)&1) == 1)
                    printf("ra\n");
        // if the (i + 1)-th bit is 1, leave in stack a
                else
                    printf("PB\n");
        // otherwise push to stack b
            }
        }
    }*/
}